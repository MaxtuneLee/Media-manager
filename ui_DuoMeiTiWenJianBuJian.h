/********************************************************************************
** Form generated from reading UI file 'MediaComponent.ui'
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

    void setupUi(QWidget *MediaComponent)
    {
        if (MediaComponent->objectName().isEmpty())
            MediaComponent->setObjectName("MediaComponent");
        MediaComponent->resize(596, 489);
        gridLayout = new QGridLayout(MediaComponent);
        gridLayout->setObjectName("gridLayout");
        SheZhiShaiXuanLie = new QComboBox(MediaComponent);
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->setObjectName("SheZhiShaiXuanLie");

        gridLayout->addWidget(SheZhiShaiXuanLie, 6, 3, 1, 1);

        duoMeiTiWenJianXianShi = new QTableView(MediaComponent);
        duoMeiTiWenJianXianShi->setObjectName("duoMeiTiWenJianXianShi");

        gridLayout->addWidget(duoMeiTiWenJianXianShi, 0, 0, 1, 4);

        baoCunAnNiu = new QPushButton(MediaComponent);
        baoCunAnNiu->setObjectName("baoCunAnNiu");

        gridLayout->addWidget(baoCunAnNiu, 1, 2, 1, 1);

        dengJiAnNiu = new QPushButton(MediaComponent);
        dengJiAnNiu->setObjectName("dengJiAnNiu");

        gridLayout->addWidget(dengJiAnNiu, 1, 0, 1, 1);

        duQuAnNiu = new QPushButton(MediaComponent);
        duQuAnNiu->setObjectName("duQuAnNiu");

        gridLayout->addWidget(duQuAnNiu, 1, 3, 1, 1);

        queRenDengJiAnNiu = new QPushButton(MediaComponent);
        queRenDengJiAnNiu->setObjectName("queRenDengJiAnNiu");

        gridLayout->addWidget(queRenDengJiAnNiu, 3, 0, 1, 1);

        zuiZaoRiQiBianJI = new QDateEdit(MediaComponent);
        zuiZaoRiQiBianJI->setObjectName("zuiZaoRiQiBianJI");

        gridLayout->addWidget(zuiZaoRiQiBianJI, 6, 0, 1, 1);

        zuiWanRiQiBianJI = new QDateEdit(MediaComponent);
        zuiWanRiQiBianJI->setObjectName("zuiWanRiQiBianJI");
        zuiWanRiQiBianJI->setDateTime(QDateTime(QDate(2100, 1, 1), QTime(0, 0, 0)));

        gridLayout->addWidget(zuiWanRiQiBianJI, 6, 1, 1, 1);

        _z = new QLabel(MediaComponent);
        _z->setObjectName("_z");

        gridLayout->addWidget(_z, 4, 0, 1, 2);

        neiRong = new QLineEdit(MediaComponent);
        neiRong->setObjectName("neiRong");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neiRong->sizePolicy().hasHeightForWidth());
        neiRong->setSizePolicy(sizePolicy);

        gridLayout->addWidget(neiRong, 6, 2, 1, 1);

        label = new QLabel(MediaComponent);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 2, 1, 1);


        retranslateUi(MediaComponent);

        QMetaObject::connectSlotsByName(MediaComponent);
    } // setupUi

    void retranslateUi(QWidget *MediaComponent)
    {
        SheZhiShaiXuanLie->setItemText(0, QString());
        SheZhiShaiXuanLie->setItemText(1, QCoreApplication::translate("MediaComponent", "Type", nullptr));
        SheZhiShaiXuanLie->setItemText(2, QCoreApplication::translate("MediaComponent", "Director", nullptr));
        SheZhiShaiXuanLie->setItemText(3, QCoreApplication::translate("MediaComponent", "Name", nullptr));
        SheZhiShaiXuanLie->setItemText(4, QCoreApplication::translate("MediaComponent", "Actor", nullptr));
        SheZhiShaiXuanLie->setItemText(5, QCoreApplication::translate("MediaComponent", "Prize", nullptr));

        SheZhiShaiXuanLie->setCurrentText(QString());
        baoCunAnNiu->setText(QCoreApplication::translate("MediaComponent", "Save", nullptr));
        dengJiAnNiu->setText(QCoreApplication::translate("MediaComponent", "Register", nullptr));
        duQuAnNiu->setText(QCoreApplication::translate("MediaComponent", "Load", nullptr));
        queRenDengJiAnNiu->setText(QCoreApplication::translate("MediaComponent", "Remove", nullptr));
        zuiZaoRiQiBianJI->setDisplayFormat(QCoreApplication::translate("MediaComponent", "yyyy-MM-dd", nullptr));
        zuiWanRiQiBianJI->setDisplayFormat(QCoreApplication::translate("MediaComponent", "yyyy-MM-dd", nullptr));
        _z->setText(QCoreApplication::translate("MediaComponent", "Filter Date: (from, to)", nullptr));
        label->setText(QCoreApplication::translate("MediaComponent", "Search", nullptr));
        (void)MediaComponent;
    } // retranslateUi

};

namespace Ui {
    class MediaComponent: public Ui_DuoMeiTiWenJianBuJian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUOMEITIWENJIANBUJIAN_H
