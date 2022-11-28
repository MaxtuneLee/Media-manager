#ifndef NANYOU_SHIWUDANSHAIXUAN_H
#define NANYOU_SHIWUDANSHAIXUAN_H

#include <QSortFilterProxyModel>
#include <QDate>

namespace mediaManager {

class DuoMeiTiWenJianShaiXuan : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    QDate zuiZaoRiQi() const { return zuiZao; }
    void sheZhiZuiXiaoRiQi(QDate riQi);
    QDate zuiWanRiQi() const { return zuiWan; }
    void sheZhiZuiDaRiQi(QDate riQi);//声明获取日期上下限函数
    explicit DuoMeiTiWenJianShaiXuan(int riQiLie, QObject *fuBuJian = nullptr);//声明筛选器
protected:
    bool filterAcceptsRow(int, const QModelIndex &) const override;//声明筛选函数
private:
    bool riQiFanWeiNei(QDate riQi) const;
    QDate zuiZao;
    QDate zuiWan;
    int riQiLie;//声明日期上下限和筛选内容所在列标识和判断函数
public:
    QString ShuRuNeiRong() const { return shuRu; }
    void sheZhiShuRuNeiRong(QString zhi);
    int shaiXuanLie() const { return riQiLie; }
    void sheZhiShaiXuanSuoZaiLie(QString suoZaiLie);//声明获取搜索内容和搜索列函数
private:
    bool fuHeTiaoJian(QString neiRong) const;
    QString shuRu;//声明判断函数和搜索内容

};
}

#endif
