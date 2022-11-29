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
    QComboBox *fliterType;
    QTableView *mediaList;
    QPushButton *exportButton;
    QPushButton *registerButton;
    QPushButton *importButton;
    QPushButton *removeButton;
    QDateEdit *earliestDate;
    QDateEdit *latestDate;
    QLabel *_z;
    QLineEdit *searchValue;
    QLabel *label;

    void setupUi(QWidget *managePage)
    {
        if (managePage->objectName().isEmpty())
            managePage->setObjectName("managePage");
        managePage->resize(596, 489);
        gridLayout = new QGridLayout(managePage);
        gridLayout->setObjectName("gridLayout");
        fliterType = new QComboBox(managePage);
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->setObjectName("fliterType");

        gridLayout->addWidget(fliterType, 6, 3, 1, 1);

        mediaList = new QTableView(managePage);
        mediaList->setObjectName("mediaList");

        gridLayout->addWidget(mediaList, 0, 0, 1, 4);

        exportButton = new QPushButton(managePage);
        exportButton->setObjectName("exportButton");

        gridLayout->addWidget(exportButton, 1, 2, 1, 1);

        registerButton = new QPushButton(managePage);
        registerButton->setObjectName("registerButton");

        gridLayout->addWidget(registerButton, 1, 0, 1, 1);

        importButton = new QPushButton(managePage);
        importButton->setObjectName("importButton");

        gridLayout->addWidget(importButton, 1, 3, 1, 1);

        removeButton = new QPushButton(managePage);
        removeButton->setObjectName("removeButton");

        gridLayout->addWidget(removeButton, 3, 0, 1, 1);

        earliestDate = new QDateEdit(managePage);
        earliestDate->setObjectName("earliestDate");

        gridLayout->addWidget(earliestDate, 6, 0, 1, 1);

        latestDate = new QDateEdit(managePage);
        latestDate->setObjectName("latestDate");
        latestDate->setDateTime(QDateTime(QDate(2099, 12, 31), QTime(0, 0, 0)));

        gridLayout->addWidget(latestDate, 6, 1, 1, 1);

        _z = new QLabel(managePage);
        _z->setObjectName("_z");

        gridLayout->addWidget(_z, 4, 0, 1, 2);

        searchValue = new QLineEdit(managePage);
        searchValue->setObjectName("searchValue");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchValue->sizePolicy().hasHeightForWidth());
        searchValue->setSizePolicy(sizePolicy);

        gridLayout->addWidget(searchValue, 6, 2, 1, 1);

        label = new QLabel(managePage);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 2, 1, 1);


        retranslateUi(managePage);

        QMetaObject::connectSlotsByName(managePage);
    } // setupUi

    void retranslateUi(QWidget *managePage)
    {
        managePage->setWindowTitle(QCoreApplication::translate("managePage", "\345\244\232\345\252\222\344\275\223\346\226\207\344\273\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        fliterType->setItemText(0, QString());
        fliterType->setItemText(1, QCoreApplication::translate("managePage", "Type", nullptr));
        fliterType->setItemText(2, QCoreApplication::translate("managePage", "Director", nullptr));
        fliterType->setItemText(3, QCoreApplication::translate("managePage", "Name", nullptr));
        fliterType->setItemText(4, QCoreApplication::translate("managePage", "Actor", nullptr));
        fliterType->setItemText(5, QCoreApplication::translate("managePage", "Prize", nullptr));

        fliterType->setCurrentText(QString());
        exportButton->setText(QCoreApplication::translate("managePage", "Save", nullptr));
        registerButton->setText(QCoreApplication::translate("managePage", "Register", nullptr));
        importButton->setText(QCoreApplication::translate("managePage", "Load", nullptr));
        removeButton->setText(QCoreApplication::translate("managePage", "Remove", nullptr));
        earliestDate->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        latestDate->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        _z->setText(QCoreApplication::translate("managePage", "Filter Date: (from, to)", nullptr));
        label->setText(QCoreApplication::translate("managePage", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePage: public Ui_managePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAGE_H
