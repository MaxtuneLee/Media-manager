#ifndef NANYOU_GUANLIYUANDENGLU_H
#define NANYOU_GUANLIYUANDENGLU_H

#include <QDialog>
#include <QMap>

namespace nanYou {

namespace Ui {
class KouLingYanZheng;//声明验证界面
}

class KouLingYanZheng : public QDialog
{
    Q_OBJECT

public:
    QString dangQianDengLu() const {return dengLuDeYongHu; }
    KouLingYanZheng(const QString& shuJuLuJing,
                     QWidget *parent = nullptr);//声明验证函数
    ~KouLingYanZheng();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void dengLuWanCheng(const QString&);//声明验证成功信号

private:
    Ui::KouLingYanZheng *ui;
    QMap<QString, QByteArray> yongHuShuJu;//
    QString dengLuDeYongHu, shuJuLuJing;//声明验证界面和口令内容
    QPoint m_startPoint;

private slots:
    void dianJiQueRen();//声明确认函数
};


}
#endif
