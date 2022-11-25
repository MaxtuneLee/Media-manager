/********************************************************************************
** Form generated from reading UI file 'KouLingYanZheng.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOULINGYANZHENG_H
#define UI_KOULINGYANZHENG_H

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

class Ui_KouLingYanZheng
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

    void setupUi(QWidget *nanYou__KouLingYanZheng)
    {
        if (nanYou__KouLingYanZheng->objectName().isEmpty())
            nanYou__KouLingYanZheng->setObjectName("nanYou__KouLingYanZheng");
        nanYou__KouLingYanZheng->setWindowModality(Qt::ApplicationModal);
        nanYou__KouLingYanZheng->resize(309, 364);
        nanYou__KouLingYanZheng->setMinimumSize(QSize(0, 200));
        nanYou__KouLingYanZheng->setMaximumSize(QSize(400, 400));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("face-smile-big");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        nanYou__KouLingYanZheng->setWindowIcon(icon);
        nanYou__KouLingYanZheng->setStyleSheet(QString::fromUtf8("background-color: #eef2f8;\n"
"border-color: rgb(7, 5, 41);\n"
"border-radius: 10px"));
        verticalLayout = new QVBoxLayout(nanYou__KouLingYanZheng);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        avatar = new QWidget(nanYou__KouLingYanZheng);
        avatar->setObjectName("avatar");
        avatar->setMinimumSize(QSize(0, 120));
        avatar->setStyleSheet(QString::fromUtf8("image: url(:/images/assets/images/avatar.png);\n"
""));

        verticalLayout->addWidget(avatar);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(nanYou__KouLingYanZheng);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        label_2 = new QLabel(nanYou__KouLingYanZheng);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: gray;"));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        _z_5 = new QLabel(nanYou__KouLingYanZheng);
        _z_5->setObjectName("_z_5");
        _z_5->setMinimumSize(QSize(0, 50));
        _z_5->setMaximumSize(QSize(16777215, 134));
        QFont font1;
        _z_5->setFont(font1);
        _z_5->setStyleSheet(QString::fromUtf8("margin-right: 10px;\n"
"font-size: 16px;"));

        horizontalLayout->addWidget(_z_5);

        miMaShuRu = new QLineEdit(nanYou__KouLingYanZheng);
        miMaShuRu->setObjectName("miMaShuRu");
        miMaShuRu->setMinimumSize(QSize(0, 40));
        miMaShuRu->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"border-bottom-color: white;\n"
"background-color:white;\n"
"padding: 8px;"));
        miMaShuRu->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(miMaShuRu);


        verticalLayout->addLayout(horizontalLayout);

        queRenAnNiu = new QPushButton(nanYou__KouLingYanZheng);
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

        retranslateUi(nanYou__KouLingYanZheng);

        QMetaObject::connectSlotsByName(nanYou__KouLingYanZheng);
    } // setupUi

    void retranslateUi(QWidget *nanYou__KouLingYanZheng)
    {
        nanYou__KouLingYanZheng->setWindowTitle(QCoreApplication::translate("nanYou::KouLingYanZheng", "\345\244\232\345\252\222\344\275\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("nanYou::KouLingYanZheng", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("nanYou::KouLingYanZheng", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\347\231\273\345\275\225\347\263\273\347\273\237", nullptr));
        _z_5->setText(QCoreApplication::translate("nanYou::KouLingYanZheng", "\360\237\224\221 \345\257\206\347\240\201", nullptr));
        queRenAnNiu->setText(QCoreApplication::translate("nanYou::KouLingYanZheng", "\347\241\256\350\256\244\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

} // namespace nanYou

namespace nanYou {
namespace Ui {
    class KouLingYanZheng: public Ui_KouLingYanZheng {};
} // namespace Ui
} // namespace nanYou

#endif // UI_KOULINGYANZHENG_H
