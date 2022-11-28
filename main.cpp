#undef main
#include "DuoMeiTiWenJianBuJian.h"
#include "loginPage.h"

#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir d = QDir::home();
    //如果还没建立存储数据的地方就新建文件夹
    d.mkdir("database");
    //进入到数据存储文件夹
    d.cd("database");
    //进行口令验证
    mediaManager::loginPage login(d.absolutePath() + "/passwd");
    //进行数据处理
    mediaManager::MediaComponent w;
    if (login.exec() == QDialog::Accepted) {
        //显示界面
        w.show();
    }
    else return 0;

    return a.exec();
}
