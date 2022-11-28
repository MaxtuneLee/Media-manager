/********************************************************************************
** Form generated from reading UI file 'DuoMeiTiWenJianBuJian.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUOMEITIWENJIANBUJIAN_H
#define UI_DUOMEITIWENJIANBUJIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DuoMeiTiWenJianBuJian
{
public:
    QGridLayout *gridLayout;
    QComboBox *SheZhiShaiXuanLie;
    QTableView *duoMeiTiWenJianXianShi;
    QPushButton *baoCunAnNiu;
    QPushButton *dengJiAnNiu;
    QPushButton *duQuAnNiu;
    QPushButton *queRenDengJiAnNiu;
    QDateEdit *zuiZaoRiQiBianJI;
    QDateEdit *zuiWanRiQiBianJI;
    QLabel *_z;
    QLineEdit *neiRong;
    QLabel *label;

    void setupUi(QWidget *DuoMeiTiWenJianBuJian)
    {
        if (DuoMeiTiWenJianBuJian->objectName().isEmpty())
            DuoMeiTiWenJianBuJian->setObjectName("DuoMeiTiWenJianBuJian");
        DuoMeiTiWenJianBuJian->resize(596, 489);
        gridLayout = new QGridLayout(DuoMeiTiWenJianBuJian);
        gridLayout->setObjectName("gridLayout");
        SheZhiShaiXuanLie = new QComboBox(DuoMeiTiWenJianBuJian);
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->setObjectName("SheZhiShaiXuanLie");

        gridLayout->addWidget(SheZhiShaiXuanLie, 6, 3, 1, 1);

        duoMeiTiWenJianXianShi = new QTableView(DuoMeiTiWenJianBuJian);
        duoMeiTiWenJianXianShi->setObjectName("duoMeiTiWenJianXianShi");

        gridLayout->addWidget(duoMeiTiWenJianXianShi, 0, 0, 1, 4);

        baoCunAnNiu = new QPushButton(DuoMeiTiWenJianBuJian);
        baoCunAnNiu->setObjectName("baoCunAnNiu");

        gridLayout->addWidget(baoCunAnNiu, 1, 2, 1, 1);

        dengJiAnNiu = new QPushButton(DuoMeiTiWenJianBuJian);
        dengJiAnNiu->setObjectName("dengJiAnNiu");

        gridLayout->addWidget(dengJiAnNiu, 1, 0, 1, 1);

        duQuAnNiu = new QPushButton(DuoMeiTiWenJianBuJian);
        duQuAnNiu->setObjectName("duQuAnNiu");

        gridLayout->addWidget(duQuAnNiu, 1, 3, 1, 1);

        queRenDengJiAnNiu = new QPushButton(DuoMeiTiWenJianBuJian);
        queRenDengJiAnNiu->setObjectName("queRenDengJiAnNiu");

        gridLayout->addWidget(queRenDengJiAnNiu, 3, 0, 1, 1);

        zuiZaoRiQiBianJI = new QDateEdit(DuoMeiTiWenJianBuJian);
        zuiZaoRiQiBianJI->setObjectName("zuiZaoRiQiBianJI");

        gridLayout->addWidget(zuiZaoRiQiBianJI, 6, 0, 1, 1);

        zuiWanRiQiBianJI = new QDateEdit(DuoMeiTiWenJianBuJian);
        zuiWanRiQiBianJI->setObjectName("zuiWanRiQiBianJI");
        zuiWanRiQiBianJI->setDateTime(QDateTime(QDate(2100, 1, 1), QTime(0, 0, 0)));

        gridLayout->addWidget(zuiWanRiQiBianJI, 6, 1, 1, 1);

        _z = new QLabel(DuoMeiTiWenJianBuJian);
        _z->setObjectName("_z");

        gridLayout->addWidget(_z, 4, 0, 1, 2);

        neiRong = new QLineEdit(DuoMeiTiWenJianBuJian);
        neiRong->setObjectName("neiRong");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neiRong->sizePolicy().hasHeightForWidth());
        neiRong->setSizePolicy(sizePolicy);

        gridLayout->addWidget(neiRong, 6, 2, 1, 1);

        label = new QLabel(DuoMeiTiWenJianBuJian);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 2, 1, 1);


        retranslateUi(DuoMeiTiWenJianBuJian);

        QMetaObject::connectSlotsByName(DuoMeiTiWenJianBuJian);
    } // setupUi

    void retranslateUi(QWidget *DuoMeiTiWenJianBuJian)
    {
        SheZhiShaiXuanLie->setItemText(0, QString());
        SheZhiShaiXuanLie->setItemText(1, QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Type", nullptr));
        SheZhiShaiXuanLie->setItemText(2, QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Director", nullptr));
        SheZhiShaiXuanLie->setItemText(3, QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Name", nullptr));
        SheZhiShaiXuanLie->setItemText(4, QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Actor", nullptr));
        SheZhiShaiXuanLie->setItemText(5, QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Prize", nullptr));

        SheZhiShaiXuanLie->setCurrentText(QString());
        baoCunAnNiu->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Save", nullptr));
        dengJiAnNiu->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Register", nullptr));
        duQuAnNiu->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Load", nullptr));
        queRenDengJiAnNiu->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Remove", nullptr));
        zuiZaoRiQiBianJI->setDisplayFormat(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "yyyy-MM-dd", nullptr));
        zuiWanRiQiBianJI->setDisplayFormat(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "yyyy-MM-dd", nullptr));
        _z->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Filter Date: (from, to)", nullptr));
        label->setText(QCoreApplication::translate("DuoMeiTiWenJianBuJian", "Search", nullptr));
        (void)DuoMeiTiWenJianBuJian;
    } // retranslateUi

};

namespace Ui {
    class DuoMeiTiWenJianBuJian: public Ui_DuoMeiTiWenJianBuJian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUOMEITIWENJIANBUJIAN_H
