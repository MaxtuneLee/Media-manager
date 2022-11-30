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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managePage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *_z;
    QSpacerItem *horizontalSpacer_6;
    QDateEdit *earliestDate;
    QDateEdit *latestDate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *fliterType;
    QLineEdit *searchValue;
    QHBoxLayout *horizontalLayout;
    QPushButton *importButton;
    QPushButton *exportButton;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *removeButton;
    QPushButton *registerButton;
    QTableView *mediaList;

    void setupUi(QWidget *managePage)
    {
        if (managePage->objectName().isEmpty())
            managePage->setObjectName("managePage");
        managePage->resize(1060, 410);
        managePage->setMinimumSize(QSize(1060, 0));
        managePage->setMaximumSize(QSize(1060, 16777215));
        QPalette palette;
        QBrush brush(QColor(238, 242, 248, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        managePage->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/assets/images/avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        managePage->setWindowIcon(icon);
        managePage->setStyleSheet(QString::fromUtf8("background-color: #eef2f8;"));
        verticalLayout = new QVBoxLayout(managePage);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, -1, 0);
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(managePage);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(true);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        label_4 = new QLabel(managePage);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(10);
        font1.setBold(false);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: #696969"));
        label_4->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(8);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 10, -1, -1);
        _z = new QLabel(managePage);
        _z->setObjectName("_z");
        _z->setMinimumSize(QSize(100, 0));
        _z->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        _z->setFont(font2);
        _z->setStyleSheet(QString::fromUtf8("font-size: 14px\n"
""));

        horizontalLayout_5->addWidget(_z);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        earliestDate = new QDateEdit(managePage);
        earliestDate->setObjectName("earliestDate");
        earliestDate->setFont(font2);
        earliestDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"font-size: 14px;\n"
"background-color:white;\n"
"border-radius: 10px;\n"
"padding: 8px;\n"
"}\n"
"QDateEdit:hover{\n"
"    border: 1px solid  #429c82;\n"
"}\n"
"QDateEdit::drop-down {\n"
"    width:15px;\n"
"	image: url(:/images/assets/images/date.png);\n"
"	padding-right: 10px;\n"
"}\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #313947, stop: 1 #34375E);\n"
"}\n"
"QCalendarWidget QToolButton{\n"
"color: white;background-color: rgba(255, 255, 255, 0);}\n"
"QCalendarWidget{\n"
"background-color:white;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        earliestDate->setWrapping(false);
        earliestDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        earliestDate->setCalendarPopup(true);

        horizontalLayout_5->addWidget(earliestDate);

        latestDate = new QDateEdit(managePage);
        latestDate->setObjectName("latestDate");
        latestDate->setFont(font2);
        latestDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"font-size: 14px;\n"
"background-color:white;\n"
"border-radius: 10px;\n"
"padding: 8px;\n"
"}\n"
"QDateEdit:hover{\n"
"    border: 1px solid  #429c82;\n"
"}\n"
"QDateEdit::drop-down {\n"
"    width:15px;\n"
"	image: url(:/images/assets/images/date.png);\n"
"	padding-right: 10px;\n"
"}\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0,stop: 0 #313947, stop: 1 #34375E);\n"
"}\n"
"QCalendarWidget QToolButton{\n"
"color: white;background-color: rgba(255, 255, 255, 0);}\n"
"QCalendarWidget{\n"
"background-color:white;\n"
"}"));
        latestDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        latestDate->setDateTime(QDateTime(QDate(2099, 12, 26), QTime(0, 0, 0)));
        latestDate->setCalendarPopup(true);

        horizontalLayout_5->addWidget(latestDate);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(managePage);
        label->setObjectName("label");
        label->setMinimumSize(QSize(108, 0));
        label->setMaximumSize(QSize(108, 16777215));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("font-size:14px;\n"
"margin-right:7px;"));

        horizontalLayout_3->addWidget(label);

        fliterType = new QComboBox(managePage);
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->addItem(QString());
        fliterType->setObjectName("fliterType");
        fliterType->setMinimumSize(QSize(0, 40));
        fliterType->setMaximumSize(QSize(16777215, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font3.setBold(false);
        font3.setItalic(false);
        fliterType->setFont(font3);
        fliterType->setCursor(QCursor(Qt::PointingHandCursor));
        fliterType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    padding:8px;\n"
"    color: #000;\n"
"    font: normal normal 14px \"Microsoft YaHei\";\n"
"    background: white;\n"
"border-bottom-left-radius: 10px;   /* \345\220\214\344\270\212 */\n"
"border-top-left-radius: 10px;   /* \345\220\214\344\270\212 */\n"
"}\n"
"QComboBox::down-arrow {\n"
"width:15px;\n"
"color: black;\n"
"}\n"
"QComboBox::drop-down:hover {\n"
"\343\200\200\343\200\200\343\200\200border: 1px solid green;   /* \350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QComboBox QAbstractScrollArea QScrollBar::handle:vertical {\n"
"    border-radius: 5px;   /* \345\234\206\350\247\222 */\n"
"    background: rgb(160,160,160);   /* \345\260\217\346\226\271\345\235\227\347\232\204\350\203\214\346\231\257\350\211\262\346\267\261\347\201\260lightblue */\n"
"}\n"
"QComboBox::drop-down{\n"
"subcontrol-origin: padding;   /* \345\255\220\346\216\247\344\273\266\345\234\250\347\210\266\345\205\203\347\264\240\344\270\255\347\232\204\345\216\237\347\202\271\347\237\251\345\275\242\343\200\202\345\246\202"
                        "\346\236\234\346\234\252\346\214\207\345\256\232\346\255\244\345\261\236\346\200\247\357\274\214\345\210\231\351\273\230\350\256\244\344\270\272padding\343\200\202 */\n"
"    subcontrol-position: top right;   /* \344\270\213\346\213\211\346\241\206\347\232\204\344\275\215\347\275\256\357\274\210\345\217\263\344\270\212\357\274\211 */\n"
"    width: 15px;   /* \344\270\213\346\213\211\346\241\206\347\232\204\345\256\275\345\272\246 */\n"
"	image: url(:/images/assets/images/arrow.png);\n"
"padding-right: 6px;\n"
"}\n"
"QComboBox:hover{\n"
"border: 1px solid  #429c82;\n"
"}\n"
"\n"
""));
        fliterType->setEditable(false);

        horizontalLayout_3->addWidget(fliterType);

        searchValue = new QLineEdit(managePage);
        searchValue->setObjectName("searchValue");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchValue->sizePolicy().hasHeightForWidth());
        searchValue->setSizePolicy(sizePolicy);
        searchValue->setMinimumSize(QSize(0, 40));
        searchValue->setMaximumSize(QSize(16777215, 40));
        searchValue->setFont(font2);
        searchValue->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 8px;\n"
"	background-color: white;\n"
"	border-color: rgb(105, 105, 105);\n"
"	border-top-right-radius: 10px;   /* \345\220\214\344\270\212 */\n"
"	border-bottom-right-radius: 10px;   /* \345\220\214\344\270\212 */\n"
"	font-size: 14px;\n"
"}\n"
"QLineEdit:hover {\n"
"    border: 1px solid  #429c82;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(searchValue);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        importButton = new QPushButton(managePage);
        importButton->setObjectName("importButton");
        QFont font4;
        font4.setPointSize(10);
        importButton->setFont(font4);
        importButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: transparent;\n"
"border: 1px solid  #696969;\n"
"color:#696969;\n"
"padding: 10px;\n"
"border-radius: 18px;\n"
"}\n"
"QPushButton:hover{\n"
"color: white;\n"
"background-color: #696969;\n"
"}"));

        horizontalLayout->addWidget(importButton);

        exportButton = new QPushButton(managePage);
        exportButton->setObjectName("exportButton");
        exportButton->setFont(font4);
        exportButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: transparent;\n"
"border: 1px solid  #429c82;\n"
"color:#429c82;\n"
"padding: 10px;\n"
"border-radius: 18px;\n"
"}\n"
"QPushButton:hover{\n"
"color: white;\n"
"background-color: #429c82;\n"
"}"));

        horizontalLayout->addWidget(exportButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(managePage);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(14);
        label_2->setFont(font5);

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignLeft);

        removeButton = new QPushButton(managePage);
        removeButton->setObjectName("removeButton");
        removeButton->setMinimumSize(QSize(40, 40));
        removeButton->setMaximumSize(QSize(40, 40));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        removeButton->setFont(font6);
        removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: transparent;\n"
"border: 1px solid  #696969;\n"
"color:#696969;\n"
"padding: 10px;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:hover{\n"
"color: white;\n"
"background-color: #696969;\n"
"}"));

        horizontalLayout_2->addWidget(removeButton);

        registerButton = new QPushButton(managePage);
        registerButton->setObjectName("registerButton");
        registerButton->setMinimumSize(QSize(40, 40));
        registerButton->setMaximumSize(QSize(40, 40));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        registerButton->setFont(font7);
        registerButton->setCursor(QCursor(Qt::PointingHandCursor));
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"background-color: #429c82;\n"
"border-radius: 20px;\n"
"padding-bottom: 5px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: #2c6957;\n"
"}"));

        horizontalLayout_2->addWidget(registerButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        mediaList = new QTableView(managePage);
        mediaList->setObjectName("mediaList");
        mediaList->setMinimumSize(QSize(620, 0));
        mediaList->setMaximumSize(QSize(620, 16777215));
        mediaList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        mediaList->setStyleSheet(QString::fromUtf8("QTableView{\n"
"background-color: white;\n"
"border\357\274\232 0;\n"
"}\n"
""));
        mediaList->setFrameShape(QFrame::Panel);
        mediaList->setFrameShadow(QFrame::Raised);
        mediaList->setMidLineWidth(1);
        mediaList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        mediaList->setDragEnabled(false);
        mediaList->setDragDropMode(QAbstractItemView::DragDrop);
        mediaList->setDefaultDropAction(Qt::MoveAction);
        mediaList->setAlternatingRowColors(false);
        mediaList->setSelectionMode(QAbstractItemView::SingleSelection);
        mediaList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        mediaList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        mediaList->setSortingEnabled(true);
        mediaList->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        mediaList->verticalHeader()->setHighlightSections(false);

        verticalLayout_4->addWidget(mediaList);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(managePage);

        fliterType->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(managePage);
    } // setupUi

    void retranslateUi(QWidget *managePage)
    {
        managePage->setWindowTitle(QCoreApplication::translate("managePage", "Media Manager [Release V1.0]", nullptr));
        label_3->setText(QCoreApplication::translate("managePage", "\345\244\232\345\252\222\344\275\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_4->setText(QCoreApplication::translate("managePage", "<html><head/><body><p align=\"center\">\347\202\271\345\207\273\345\210\227\350\241\250\345\217\263\344\270\212\350\247\222\345\212\240\345\217\267\346\267\273\345\212\240\344\270\200\346\235\241\350\256\260\345\275\225</p><p align=\"center\">\345\234\250\345\210\227\350\241\250\344\270\255\347\202\271\345\207\273\350\256\260\345\275\225\347\232\204\345\206\205\345\256\271\347\204\266\345\220\216\347\202\271\345\207\273\345\207\217\345\217\267\345\210\240\351\231\244\350\256\260\345\275\225</p><p align=\"center\">\345\234\250\344\270\213\346\226\271\350\256\276\347\275\256\350\265\267\345\247\213\346\227\245\346\234\237\345\222\214\347\273\210\346\255\242\346\227\245\346\234\237\347\255\233\351\200\211\346\227\266\351\227\264\346\256\265\345\206\205\347\232\204\350\256\260\345\275\225</p><p align=\"center\">\351\200\211\346\213\251\346\220\234\347\264\242\347\261\273\345\236\213\345\220\216\350\276\223\345\205\245\345\205\263\351\224\256\350\257\215\347\233\264\346\216\245\346\220\234\347\264\242\345\207\272\346"
                        "\234\211\345\205\263\350\256\260\345\275\225</p><p align=\"center\">\351\200\232\350\277\207\344\270\213\346\226\271\347\232\204\346\214\211\351\222\256\345\257\274\345\205\245\346\225\260\346\215\256\345\222\214\345\257\274\345\207\272\346\225\260\346\215\256\346\226\207\344\273\266</p></body></html>", nullptr));
        _z->setText(QCoreApplication::translate("managePage", "\360\237\223\205 \347\255\233\351\200\211\346\227\245\346\234\237", nullptr));
        earliestDate->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        latestDate->setDisplayFormat(QCoreApplication::translate("managePage", "yyyy-MM-dd", nullptr));
        label->setText(QCoreApplication::translate("managePage", "\360\237\224\215 \346\220\234\347\264\242", nullptr));
        fliterType->setItemText(0, QString());
        fliterType->setItemText(1, QCoreApplication::translate("managePage", "Type", "\346\226\207\344\273\266\347\261\273\345\236\213"));
        fliterType->setItemText(2, QCoreApplication::translate("managePage", "Director", "\345\257\274\346\274\224"));
        fliterType->setItemText(3, QCoreApplication::translate("managePage", "Name", "\345\220\215\347\247\260"));
        fliterType->setItemText(4, QCoreApplication::translate("managePage", "Actor", "\346\274\224\345\221\230"));
        fliterType->setItemText(5, QCoreApplication::translate("managePage", "Prize", "\345\245\226\351\241\271"));

        fliterType->setCurrentText(QString());
        fliterType->setPlaceholderText(QCoreApplication::translate("managePage", "\350\257\267\351\200\211\346\213\251", nullptr));
        searchValue->setPlaceholderText(QCoreApplication::translate("managePage", "\350\257\267\350\276\223\345\205\245\346\220\234\347\264\242\345\205\263\351\224\256\350\257\215", nullptr));
        importButton->setText(QCoreApplication::translate("managePage", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        exportButton->setText(QCoreApplication::translate("managePage", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
        label_2->setText(QCoreApplication::translate("managePage", "\360\237\227\203\357\270\217 \345\244\232\345\252\222\344\275\223\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        removeButton->setText(QCoreApplication::translate("managePage", "\344\270\200", nullptr));
        registerButton->setText(QCoreApplication::translate("managePage", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePage: public Ui_managePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPAGE_H
