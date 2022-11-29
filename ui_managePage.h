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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managePage
{
public:
    QGridLayout *gridLayout;
    QTableView *mediaList;

    void setupUi(QWidget *managePage)
    {
        if (managePage->objectName().isEmpty())
            managePage->setObjectName("managePage");
        managePage->resize(596, 489);
        gridLayout = new QGridLayout(managePage);
        gridLayout->setObjectName("gridLayout");
        mediaList = new QTableView(managePage);
        mediaList->setObjectName("mediaList");

        gridLayout->addWidget(mediaList, 0, 0, 1, 2);


        retranslateUi(managePage);

        QMetaObject::connectSlotsByName(managePage);
    } // setupUi

    void retranslateUi(QWidget *managePage)
    {
        managePage->setWindowTitle(QCoreApplication::translate("managePage", "\345\244\232\345\252\222\344\275\223\346\226\207\344\273\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePage: public Ui_managePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAGE_H
