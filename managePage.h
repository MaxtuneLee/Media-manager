#ifndef SHIWUDANBUJIAN_H
#define SHIWUDANBUJIAN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class managePage; }
QT_END_NAMESPACE

namespace mediaManager {
class MediaFile;
class mediaFliter;//定义筛选器类和数据类
class managePage : public QWidget {
    Q_OBJECT

public:
    managePage(QWidget *parent = nullptr);
    ~managePage();

private:
    Ui::managePage *ui;
    MediaFile* mediaFile;
    mediaFliter* mediaFilter;
//定义界面、数据和筛选器

public slots:
    QString dataSave();
    bool dataRead();//定义数据保存路径和读取情况
private slots:
    void dataRegister();//声明登记数据函数
};

}
#endif
