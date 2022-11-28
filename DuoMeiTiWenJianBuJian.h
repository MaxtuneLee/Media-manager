#ifndef SHIWUDANBUJIAN_H
#define SHIWUDANBUJIAN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MediaComponent; }
QT_END_NAMESPACE

namespace mediaManager {
class MediaFile;
class MediaFliter;//定义筛选器类和数据类
class MediaComponent : public QWidget {
    Q_OBJECT

public:
    MediaComponent(QWidget *parent = nullptr);
    ~MediaComponent();

private:
    Ui::MediaComponent *ui;
    MediaFile* mediaFile;
    MediaFliter* mediaFilter;
//定义界面、数据和筛选器

public slots:
    QString dataSave();
    bool dataRead();//定义数据保存路径和读取情况
private slots:
    void dataRegister();//声明登记数据函数
};

}
#endif
