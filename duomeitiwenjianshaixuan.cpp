#include "DuoMeiTiWenJianShaiXuan.h"

#include <QDateTime>

namespace nanYou {

DuoMeiTiWenJianShaiXuan::DuoMeiTiWenJianShaiXuan(int dateCol, QObject *parent)
    : QSortFilterProxyModel{parent}, riQiLie(dateCol) {}
bool DuoMeiTiWenJianShaiXuan::riQiFanWeiNei(QDate riQi) const {
    if (!riQi.isValid())
        return false;
    return (!zuiZao.isValid() || riQi > zuiZao)
            && (!zuiWan.isValid() || riQi < zuiWan);
}//判断日期是否在范围内

void DuoMeiTiWenJianShaiXuan::sheZhiZuiXiaoRiQi(QDate date) {
    zuiZao = date;
    invalidateFilter();
}//获取传递时间下限

void DuoMeiTiWenJianShaiXuan::sheZhiZuiDaRiQi(QDate date) {
    zuiWan = date;
    invalidateFilter();
}//获取传递时间上限
void DuoMeiTiWenJianShaiXuan::sheZhiShaiXuanSuoZaiLie(QString suoZaiLie) {
    if(suoZaiLie.compare("Name")==0) riQiLie = 0;
    if(suoZaiLie.compare("Type")==0) riQiLie = 2;
    if(suoZaiLie.compare("Director")==0) riQiLie = 4;
    if(suoZaiLie.compare("Actor")==0) riQiLie = 5;
    if(suoZaiLie.compare("Prize")==0) riQiLie = 6;
    invalidateFilter();//使当前筛选无效化
}//根据筛选内容确定数据所在列
bool DuoMeiTiWenJianShaiXuan::fuHeTiaoJian(QString neiRong) const {
    if (neiRong.isEmpty())
        return false;

    if((shuRu.compare(neiRong)==0)||shuRu.isEmpty())
        return true;
    return false;
}//判断数据是否符合搜索内容
bool DuoMeiTiWenJianShaiXuan::filterAcceptsRow(int sourceRow,
    const QModelIndex &sp) const
{

    QModelIndex riQiSuoYin = sourceModel()->index(sourceRow, riQiLie, sp);
    QModelIndex riQiSuoYinTwo = sourceModel()->index(sourceRow, 1, sp);
    return (fuHeTiaoJian(sourceModel()->data(riQiSuoYin).toString())
           && QSortFilterProxyModel::filterAcceptsRow(sourceRow, sp))
           &&(riQiFanWeiNei(sourceModel()->data(riQiSuoYinTwo).toDate())
              && QSortFilterProxyModel::filterAcceptsRow(sourceRow, sp));
}//调用判断函数返回是否需要被筛选并实现筛选
void DuoMeiTiWenJianShaiXuan::sheZhiShuRuNeiRong(QString zhi) {
    shuRu = zhi;
    invalidateFilter();
}//获取传递输入内容

}
