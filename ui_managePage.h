/********************************************************************************
** Form generated from reading UI file 'managePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPAGE_H
#define UI_MANAGEPAGE_H

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

class Ui_managePage
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

    void setupUi(QWidget *managePage)
    {
        if (managePage->objectName().isEmpty())
            managePage->setObjectName("managePage");
        managePage->resize(596, 489);
        gridLayout = new QGridLayout(managePage);
        gridLayout->setObjectName("gridLayout");
        SheZhiShaiXuanLie = new QComboBox(managePage);
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->addItem(QString());
        SheZhiShaiXuanLie->setObjectName("SheZhiShaiXuanLie");

        gridLayout->addWidget(SheZhiShaiXuanLie, 6, 3, 1, 1);

        duoMeiTiWenJianXianShi = new QTableView(managePage);
        duoMeiTiWenJianXianShi->setObjectName("duoMeiTiWenJianXianShi");

        gridLayout->addWidget(duoMeiTiWenJianXianShi, 0, 0, 1, 4);

        baoCunAnNiu = new QPushButton(managePage);
        baoCunAnNiu->setObjectName("baoCunAnNiu");

        gridLayout->addWidget(baoCunAnNiu, 1, 2, 1, 1);

        dengJiAnNiu = new QPushButton(managePage);
        dengJiAnNiu->setObjectName("dengJiAnNiu");

        gridLayout->addWidget(dengJiAnNiu, 1, 0, 1, 1);

        duQuAnNiu = new QPushButton(managePage);
        duQuAnNiu->setObjectName("duQuAnNiu");

        gridLayout->addWidget(duQuAnNiu, 1, 3, 1, 1);

        queRenDengJiAnNiu = new QPushButton(managePage);
        queRenDengJiAnNiu->setObjectName("queRenDengJiAnNiu");

        gridLayout->addWidget(queRenDengJiAnNiu, 3, 0, 1, 1);

        zuiZaoRiQiBianJI = new QDateEdit(managePage);
        zuiZaoRiQiBianJI->setObjectName("zuiZaoRiQiBianJI");

        gridLayout->addWidget(zuiZaoRiQiBianJI, 6, 0, 1, 1);

        zuiWanRiQiBianJI = new QDateEdit(managePage);
        zuiWanRiQiBianJI->setObjectName("zuiWanRiQiBianJI");
        zuiWanRiQiBianJI->setDateTime(QDateTime(QDate(2099, 12, 31), QTime(0, 0, 0)));

        gridLayout->addWidget(zuiWanRiQiBianJI, 6, 1, 1, 1);

        _z = new QLabel(managePage);
        _z->setObjectName("_z");

        gridLayout->addWidget(_z, 4, 0, 1, 2);

        neiRong = new QLineEdit(managePage);
        neiRong->setObjectName("neiRong");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neiRong->sizePolicy().hasHeightForWidth());
        neiRong->setSizePolicy(sizePolicy);

        gridLayout->addWidget(neiRong, 6, 2, 1, 1);

        label = new QLabel(managePage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 2, 1, 1);


        retranslateUi(managePage);

        QMetaObject::connectSlotsByName(managePage);
    } // setupUi

    void retranslateUi(QWidget *managePage)
    {
        managePage->setWindowTitle(QCoreApplication::translate("managePage", "\345\244\232\345\252\222\344\275\223\346\226\207\344\273\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        SheZhiShaiXuanLie->setItemText(0, QString());
        SheZhiShaiXuanLie->setItemText(1, QCoreApplication::translate("managePage", "Type", nullptr));
        SheZhiShaiXuanLie->setItemText(2, QCoreApplication::translate("managePage", "Director", nullptr));
        SheZhiShaiXuanLie->setItemText(3, QCoreApplication::translate("managePage", "Name", nullptr));
        SheZhiShaiXuanLie->setItemText(4, QCoreApplication::translate("managePage", "Actor", nullptr));
        SheZhiShaiXuanLie->setItemText(5, QCoreApplication::translate("managePage", "Prize", nullptr));

        SheZhiShaiXuanLie->setCurrentText(QString());
        baoCunAnNiu->setText(QCoreApplication::translate("managePage", "Save", nullptr));
        dengJiAnNiu->setText(QCoreApplication::translate("managePage", "Register", nullptr));
        duQuAnNiu->setText(QCoreApplication::translate("managePage", "Load", nullptr));
        queRenDengJiAnNiu->setText(QCoreApplication::translate("managePage", "Remove", nullptr));
        zuiZaoRiQiBianJI->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        zuiWanRiQiBianJI->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        _z->setText(QCoreApplication::translate("managePage", "Filter Date: (from, to)", nullptr));
        label->setText(QCoreApplication::translate("managePage", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePage: public Ui_managePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAGE_H
