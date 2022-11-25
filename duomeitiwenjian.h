#ifndef NANYOU_SHIWUDAN_H
#define NANYOU_SHIWUDAN_H

#include <QAbstractTableModel>
#include <QTime>
#include <QDataStream>

namespace nanYou {

struct DuoMieTi {
    QString wenJianMing;
    QDate RiQi;
    QString faXingRiQi, leiXing,daXiao,daoYan,yanYuan,jiangXiang;
    qint32 liuLanCiShu;
    DuoMieTi();
};//声明结构体内容

QDataStream& operator<<(QDataStream& wenJianLiu, const DuoMieTi& meiTi);
QDataStream& operator>>(QDataStream& wenJianLiu, DuoMieTi& meiTi);//声明文件保存与读取函数

class DuoMeiTiWenJian : public QAbstractTableModel {
    Q_OBJECT
    QVector<DuoMieTi> duoMieTiZu;//建立建立结构体数组储存数据

    friend QDataStream& operator<<(QDataStream& wenJianLiu, const DuoMeiTiWenJian& duoMeiTiWenJian) {
        return wenJianLiu << duoMeiTiWenJian.duoMieTiZu;
    }
    friend QDataStream& operator>>(QDataStream& wenJianLiu, DuoMeiTiWenJian& duoMeiTiWenJian) {
        duoMeiTiWenJian.beginResetModel();
        wenJianLiu >> duoMeiTiWenJian.duoMieTiZu;
        duoMeiTiWenJian.endResetModel();
        return wenJianLiu;
    }//文件的保存与读取
public:
    bool insertRows(int hang, int shu, const QModelIndex& = QModelIndex()) override;
    bool removeRows(int hang, int shu, const QModelIndex& = QModelIndex()) override;//声明界面增加和移除数据函数
    int columnCount(const QModelIndex& = QModelIndex()) const override { return 8; }//定义界面总列数
    int rowCount(const QModelIndex& = QModelIndex()) const override {
        return duoMieTiZu.size();
    }//计算返回数组大小为数据量

    QVariant headerData(int diJiGe, Qt::Orientation fangXiang,
                        int zuoYong = Qt::DisplayRole) const override;//声明界面布局函数
    QVariant data(const QModelIndex &suoYin, int zuoYong = Qt::DisplayRole) const override;//声明界面显示控制函数
    Qt::ItemFlags flags(const QModelIndex &suoYin) const override;//声明编辑控制函数
    bool setData(const QModelIndex &suoYin, const QVariant &zhi,
                 int zuoYong = Qt::EditRole);//声明数据更改函数

    const QVector<DuoMieTi>& huoQuDuoMeiTi() const {return duoMieTiZu;}//获取数据信息
    explicit DuoMeiTiWenJian(QObject *parent = nullptr);
};

}

#endif
