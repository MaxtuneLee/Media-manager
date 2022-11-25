#undef main
#include "DuoMeiTiWenJianBuJian.h"
#include "KouLingYanZheng.h"

#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir d = QDir::home();
    d.mkdir("Information");
    d.cd("Information");//打开建立文件路径
    nanYou::KouLingYanZheng dengLu(d.absolutePath() + "/passwd");//进行口令验证
    nanYou::DuoMeiTiWenJianBuJian w;//进行数据处理
    if (dengLu.exec() == QDialog::Accepted) {
        w.show();//显示界面
    }
    else return 0;

    return a.exec();
}
