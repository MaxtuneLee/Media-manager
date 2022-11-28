#include "loginPage.h"
#include "ui_loginPage.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QPainter>
#include <QMouseEvent>

namespace mediaManager {

loginPage::loginPage(const QString &luJing, QWidget *fuBuJian) :
    QDialog(fuBuJian), ui(new Ui::loginPage), shuJuLuJing(luJing)//新建验证界面和验证器
{
    ui->setupUi(this);
    setWindowFlags (Qt::FramelessWindowHint);
    QFile f(luJing);
    f.open(QIODevice::ReadOnly);
    QDataStream outputStream(&f);//建立界面读取口令内容
    outputStream >> userData;
    connect(ui->submitButton, &QPushButton::clicked,
            this, &loginPage::dianJiQueRen);
    connect(this, &loginPage::dengLuWanCheng, this, &QDialog::accept);

}//将验证界面的输入行和按钮和函数链接
void loginPage::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_startPoint = frameGeometry().topLeft() - event->globalPos();
    }
}

void loginPage::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() + m_startPoint);
}
void loginPage::dianJiQueRen() {
    QString shuRuMing = "r";
    QByteArray miMa =
        ui->pwdInput->text().toUtf8();
            if ("root" != miMa)
                QMessageBox::warning(this, "提示",
                    "登录失败，请检查密码是否正确" );
            else emit dengLuWanCheng(dengLuDeYongHu = shuRuMing);//判断是否验证成功
}
loginPage::~loginPage()
{
    delete ui;//删除界面进入下一步
}


void loginPage::on_pushButton_clicked()
{
    this->close();
}

}
