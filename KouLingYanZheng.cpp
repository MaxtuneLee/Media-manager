#include "KouLingYanZheng.h"
#include "ui_KouLingYanZheng.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QPainter>
#include <QMouseEvent>

namespace nanYou {

KouLingYanZheng::KouLingYanZheng(const QString &luJing, QWidget *fuBuJian) :
    QDialog(fuBuJian), ui(new Ui::KouLingYanZheng), shuJuLuJing(luJing)//新建验证界面和验证器
{
    ui->setupUi(this);
    setWindowFlags (Qt::FramelessWindowHint);
    QFile f(luJing);
    f.open(QIODevice::ReadOnly);
    QDataStream shuChuLiu(&f);//建立界面读取口令内容
    shuChuLiu >> yongHuShuJu;
    connect(ui->queRenAnNiu, &QPushButton::clicked,
            this, &KouLingYanZheng::dianJiQueRen);
    connect(this, &KouLingYanZheng::dengLuWanCheng, this, &QDialog::accept);

}//将验证界面的输入行和按钮和函数链接
void KouLingYanZheng::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_startPoint = frameGeometry().topLeft() - event->globalPos();
    }
}

void KouLingYanZheng::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() + m_startPoint);
}
void KouLingYanZheng::dianJiQueRen() {
    QString shuRuMing = "r";
    QByteArray miMa =
        ui->miMaShuRu->text().toUtf8();
            if ("root" != miMa)
                QMessageBox::warning(this, "提示",
                    "登录失败，请检查密码是否正确" );
            else emit dengLuWanCheng(dengLuDeYongHu = shuRuMing);//判断是否验证成功
}
KouLingYanZheng::~KouLingYanZheng()
{
    delete ui;//删除界面进入下一步
}

}
