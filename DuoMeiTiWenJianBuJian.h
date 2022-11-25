#ifndef SHIWUDANBUJIAN_H
#define SHIWUDANBUJIAN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class DuoMeiTiWenJianBuJian; }
QT_END_NAMESPACE

namespace nanYou {
class DuoMeiTiWenJian;
class DuoMeiTiWenJianShaiXuan;//定义筛选器类和数据类
class DuoMeiTiWenJianBuJian : public QWidget {
    Q_OBJECT

public:
    DuoMeiTiWenJianBuJian(QWidget *parent = nullptr);
    ~DuoMeiTiWenJianBuJian();

private:
    Ui::DuoMeiTiWenJianBuJian *ui;
    DuoMeiTiWenJian* duoMeiTiWenJian;
    DuoMeiTiWenJianShaiXuan* shaiXuan;
//定义界面、数据和筛选器

public slots:
    QString baoCunShuJu();
    bool duQuShuJu();//定义数据保存路径和读取情况
private slots:
    void queRenDengJi();//声明登记数据函数
};

}
#endif
