#include "DuoMeiTiWenJian.h"

namespace nanYou {

DuoMieTi::DuoMieTi() :
    wenJianMing("Input") , RiQi(QDate::currentDate()), faXingRiQi("2003-02-23") , leiXing("Input") , daXiao("Input"),
    daoYan("Input") , yanYuan("Input"), jiangXiang("Input") , liuLanCiShu(0)  {}//初始化结构提内容

QDataStream& operator<<(QDataStream& wenJianLiu, const DuoMieTi& duoMeiTi) {
    return wenJianLiu << duoMeiTi.wenJianMing << duoMeiTi.RiQi << duoMeiTi.leiXing
                      << duoMeiTi.daXiao << duoMeiTi.daoYan << duoMeiTi.yanYuan
                      << duoMeiTi.jiangXiang << duoMeiTi.liuLanCiShu;
}

QDataStream& operator>>(QDataStream& wenJianLiu, DuoMieTi& duoMeiTi) {
    return wenJianLiu >> duoMeiTi.wenJianMing >> duoMeiTi.RiQi >> duoMeiTi.leiXing
           >> duoMeiTi.daXiao >> duoMeiTi.daoYan >> duoMeiTi.yanYuan
           >> duoMeiTi.jiangXiang >> duoMeiTi.liuLanCiShu;
}//实现数据的保存与读取

DuoMeiTiWenJian::DuoMeiTiWenJian(QObject *parent) : QAbstractTableModel{parent} {}

bool DuoMeiTiWenJian::insertRows(int hang, int shu, const QModelIndex &par) {

    if (hang > duoMieTiZu.size() || hang < 0 || shu <= 0)
        return false;
    beginInsertRows(par, hang, hang + shu - 1);
    duoMieTiZu.insert(hang, shu, DuoMieTi());
    endInsertRows();
    return true;
}//实现界面增加行


bool DuoMeiTiWenJian::removeRows(int hang, int shu, const QModelIndex &par) {
    if (hang < 0 || shu <= 0 || hang + shu > duoMieTiZu.size())
        return false;
    beginRemoveRows(par, hang, hang + shu - 1);
    duoMieTiZu.remove(hang, shu);
    endRemoveRows();
    return true;
}//实现界面移除行

QVariant DuoMeiTiWenJian::headerData(int diJiGe, Qt::Orientation fangXiang,
                                     int zuoYong) const {

    if (zuoYong != Qt::DisplayRole) return QVariant();

    if (fangXiang == Qt::Vertical)
        return diJiGe + 1; // 0-indexed

    switch (diJiGe) {
    case 0: return tr("     Name     ");
    case 1: return tr("      Date      ");
    case 2: return tr("Type");
    case 3: return tr("  Size  ");
    case 4: return tr("     Director     ");
    case 5: return tr("     Actor     ");
    case 6: return tr("      Prize      ");
    case 7: return tr("Times");
    }
    return QVariant();
}//实现界面头标识显示


QVariant DuoMeiTiWenJian::data(const QModelIndex &index, int zuoYong) const {
    const DuoMieTi &toShow = duoMieTiZu.at(index.row());

    if (zuoYong != Qt::DisplayRole)
        return QVariant();


    switch (index.column()) {
    case 0: return toShow.wenJianMing;
    case 1: return toShow.RiQi;
    case 2: return toShow.leiXing;
    case 3: return toShow.daXiao;
    case 4: return toShow.daoYan;
    case 5: return toShow.yanYuan;
    case 6: return toShow.jiangXiang;
    case 7: return toShow.liuLanCiShu;
    }
    return QVariant();
}//实现界面显示数据内容

Qt::ItemFlags DuoMeiTiWenJian::flags(const QModelIndex &suoYin) const {

    return QAbstractTableModel::flags(suoYin) | Qt::ItemIsEditable;
}//实现控制数据编辑

bool DuoMeiTiWenJian::setData(const QModelIndex &suoYin, const QVariant &zhi, int zuoYong) {

    if (zuoYong != Qt::EditRole) return false;

    auto lie = suoYin.column(), hang = suoYin.row();
    switch (lie) {
    case 0: duoMieTiZu[hang].wenJianMing = zhi.toString(); break;
    case 1:
        duoMieTiZu[hang].RiQi =  QDate::fromString((zhi.toString()), "yyyy/MM/dd");
        duoMieTiZu[hang].faXingRiQi = zhi.toString();
        break;//将输入的日期格式化方便排序与查找
    case 2: duoMieTiZu[hang].leiXing = zhi.toString(); break;
    case 3: duoMieTiZu[hang].daXiao = zhi.toString(); break;
    case 4: duoMieTiZu[hang].daoYan = zhi.toString(); break;
    case 5: duoMieTiZu[hang].yanYuan = zhi.toString(); break;
    case 6: duoMieTiZu[hang].jiangXiang = zhi.toString(); break;
    case 7: duoMieTiZu[hang].liuLanCiShu = zhi.toInt(); break;
    default: return false;
    }

    return true;
}//实现编辑数据内容

}
