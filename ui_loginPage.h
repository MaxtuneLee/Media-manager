/********************************************************************************
** Form generated from reading UI file 'loginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace nanYou {

class Ui_loginPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *avatar;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *_z_5;
    QLineEdit *miMaShuRu;
    QPushButton *queRenAnNiu;

    void setupUi(QWidget *nanYou__loginPage)
    {
        if (nanYou__loginPage->objectName().isEmpty())
            nanYou__loginPage->setObjectName("nanYou__loginPage");
        nanYou__loginPage->setWindowModality(Qt::WindowModal);
        nanYou__loginPage->resize(250, 340);
        nanYou__loginPage->setMinimumSize(QSize(0, 0));
        nanYou__loginPage->setMaximumSize(QSize(250, 360));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("face-smile-big");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        nanYou__loginPage->setWindowIcon(icon);
        nanYou__loginPage->setStyleSheet(QString::fromUtf8("background-color: #eef2f8;\n"
"border-color: rgb(7, 5, 41);\n"
"border: 1px;\n"
"border-radius: 10px;"));
        verticalLayout = new QVBoxLayout(nanYou__loginPage);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        avatar = new QWidget(nanYou__loginPage);
        avatar->setObjectName("avatar");
        avatar->setMinimumSize(QSize(0, 120));
        avatar->setStyleSheet(QString::fromUtf8("image: url(:/images/assets/images/avatar.png);\n"
""));

        verticalLayout->addWidget(avatar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(nanYou__loginPage);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:26px;\n"
""));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        label_2 = new QLabel(nanYou__loginPage);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 9));
        label_2->setStyleSheet(QString::fromUtf8("color: gray;"));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        _z_5 = new QLabel(nanYou__loginPage);
        _z_5->setObjectName("_z_5");
        _z_5->setMinimumSize(QSize(0, 50));
        _z_5->setMaximumSize(QSize(16777215, 134));
        QFont font1;
        _z_5->setFont(font1);
        _z_5->setStyleSheet(QString::fromUtf8("margin-right: 10px;\n"
"font-size: 16px;"));

        horizontalLayout->addWidget(_z_5);

        miMaShuRu = new QLineEdit(nanYou__loginPage);
        miMaShuRu->setObjectName("miMaShuRu");
        miMaShuRu->setMinimumSize(QSize(0, 40));
        miMaShuRu->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"border-bottom-color: white;\n"
"background-color:white;\n"
"padding: 8px;"));
        miMaShuRu->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(miMaShuRu);


        verticalLayout->addLayout(horizontalLayout);

        queRenAnNiu = new QPushButton(nanYou__loginPage);
        queRenAnNiu->setObjectName("queRenAnNiu");
        queRenAnNiu->setMinimumSize(QSize(0, 0));
        queRenAnNiu->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: #429c82;\n"
"padding: 10px;\n"
"border: 0;\n"
"border-radius: 18px;"));

        verticalLayout->addWidget(queRenAnNiu);

#if QT_CONFIG(shortcut)
        _z_5->setBuddy(miMaShuRu);
#endif // QT_CONFIG(shortcut)

        retranslateUi(nanYou__loginPage);

        QMetaObject::connectSlotsByName(nanYou__loginPage);
    } // setupUi

    void retranslateUi(QWidget *nanYou__loginPage)
    {
        nanYou__loginPage->setWindowTitle(QCoreApplication::translate("nanYou::loginPage", "\345\244\232\345\252\222\344\275\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("nanYou::loginPage", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("nanYou::loginPage", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\347\231\273\345\275\225\347\263\273\347\273\237", nullptr));
        _z_5->setText(QCoreApplication::translate("nanYou::loginPage", "\360\237\224\221 \345\257\206\347\240\201", nullptr));
        queRenAnNiu->setText(QCoreApplication::translate("nanYou::loginPage", "\347\241\256\350\256\244\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

} // namespace nanYou

namespace nanYou {
namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui
} // namespace nanYou

#endif // UI_LOGINPAGE_H
