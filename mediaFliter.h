#ifndef NANYOU_SHIWUDANSHAIXUAN_H
#define NANYOU_SHIWUDANSHAIXUAN_H

#include <QSortFilterProxyModel>
#include <QDate>

namespace mediaManager {

class mediaFliter : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    QDate zuiZaoRiQi() const { return earliest; }
    void earliestDate(QDate riQi);
    QDate zuiWanRiQi() const { return lastest; }
    void latestDate(QDate riQi);//声明获取日期上下限函数
    explicit mediaFliter(int dateColumn, QObject *fuBuJian = nullptr);//声明筛选器
protected:
    bool filterAcceptsRow(int, const QModelIndex &) const override;//声明筛选函数
private:
    bool dataRange(QDate riQi) const;
    QDate earliest;
    QDate lastest;
    int dateColumn;//声明日期上下限和筛选内容所在列标识和判断函数
public:
    QString ShuRuNeiRong() const { return input; }
    void setInput(QString zhi);
    int shaiXuanLie() const { return dateColumn; }
    void filterColumn(QString suoZaiLie);//声明获取搜索内容和搜索列函数
private:
    bool isEligible(QString searchValue) const;
    QString input;//声明判断函数和搜索内容

};
}

#endif
