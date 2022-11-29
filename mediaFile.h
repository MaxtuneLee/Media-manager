#ifndef NANYOU_SHIWUDAN_H
#define NANYOU_SHIWUDAN_H

#include <QAbstractTableModel>
#include <QTime>
#include <QDataStream>

namespace mediaManager {

struct mediaFile {
    QString name;
    QDate date;
    QString publishDate, type,daXiao,daoYan,yanYuan,jiangXiang;
    qint32 liuLanCiShu;
    mediaFile();
};//声明结构体内容

QDataStream& operator<<(QDataStream& wenJianLiu, const mediaFile& meiTi);
QDataStream& operator>>(QDataStream& wenJianLiu, mediaFile& meiTi);//声明文件保存与读取函数

class MediaFile : public QAbstractTableModel {
    Q_OBJECT
    QVector<mediaFile> duoMieTiZu;//建立建立结构体数组储存数据

    friend QDataStream& operator<<(QDataStream& wenJianLiu, const MediaFile& mediaFile) {
        return wenJianLiu << mediaFile.duoMieTiZu;
    }
    friend QDataStream& operator>>(QDataStream& wenJianLiu, MediaFile& mediaFile) {
        mediaFile.beginResetModel();
        wenJianLiu >> mediaFile.duoMieTiZu;
        mediaFile.endResetModel();
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

    const QVector<mediaFile>& huoQuDuoMeiTi() const {return duoMieTiZu;}//获取数据信息
    explicit MediaFile(QObject *parent = nullptr);
};

}

#endif
