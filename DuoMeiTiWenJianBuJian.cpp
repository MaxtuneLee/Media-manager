#include "DuoMeiTiWenJianBuJian.h"
#include "ui_DuoMeiTiWenJianBuJian.h"
#include "DuoMeiTiWenJian.h"
#include "DuoMeiTiWenJianShaiXuan.h"

#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtWidgets/QFileDialog>

namespace nanYou {

DuoMeiTiWenJianBuJian::DuoMeiTiWenJianBuJian(QWidget *parent)
    : QWidget(parent), ui(new Ui::DuoMeiTiWenJianBuJian)
    , duoMeiTiWenJian(new DuoMeiTiWenJian(this)), shaiXuan(new DuoMeiTiWenJianShaiXuan(1, this))//新建界面、数据和筛选器
{
    ui->setupUi(this);
    shaiXuan->setSourceModel(duoMeiTiWenJian);
    ui->duoMeiTiWenJianXianShi->setModel(shaiXuan);
    ui->duoMeiTiWenJianXianShi->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->duoMeiTiWenJianXianShi->setSortingEnabled(true);//建立界面并把界面内容传递给筛选器

    connect(ui->dengJiAnNiu, &QPushButton::clicked, this, [this]() {
        duoMeiTiWenJian->insertRow(duoMeiTiWenJian->rowCount());
    });
    connect(ui->queRenDengJiAnNiu, &QPushButton::clicked,
            this, &DuoMeiTiWenJianBuJian::queRenDengJi);
    connect(ui->baoCunAnNiu, &QPushButton::clicked,
            this, &DuoMeiTiWenJianBuJian::baoCunShuJu);
    connect(ui->duQuAnNiu, &QPushButton::clicked,
            this, &DuoMeiTiWenJianBuJian::duQuShuJu);
    connect(ui->zuiZaoRiQiBianJI, &QDateEdit::dateChanged,
            shaiXuan, &DuoMeiTiWenJianShaiXuan::sheZhiZuiXiaoRiQi);
    connect(ui->neiRong, &QLineEdit::textEdited, shaiXuan, &DuoMeiTiWenJianShaiXuan::sheZhiShuRuNeiRong);
    connect(ui->SheZhiShaiXuanLie, &QComboBox::currentTextChanged,shaiXuan, &DuoMeiTiWenJianShaiXuan::sheZhiShaiXuanSuoZaiLie);
    connect(ui->zuiWanRiQiBianJI, &QDateEdit::dateChanged,
            shaiXuan, &DuoMeiTiWenJianShaiXuan::sheZhiZuiDaRiQi);
}//将界面上的按钮和输入框与函数链接

void DuoMeiTiWenJianBuJian::queRenDengJi() {
    auto suoYouXuanZe = ui->duoMeiTiWenJianXianShi->selectionModel()->selectedIndexes();
    for (const QModelIndex& xuanZe : suoYouXuanZe) {
        duoMeiTiWenJian->removeRow(xuanZe.row());//删除所选数据
    }
}

QString DuoMeiTiWenJianBuJian::baoCunShuJu() {
    QDir d = QDir::home();
    d.mkdir("Information");
    d.cd("Information");
    QString shiJiLuJing = QFileDialog::getSaveFileName(this, "标题", QDir::homePath());
    QFile f(shiJiLuJing);
    f.open(QIODevice::WriteOnly);
    QDataStream shuChuLiu(&f);
    shuChuLiu << *duoMeiTiWenJian;
    return shiJiLuJing;
}//实现文件的保存

bool DuoMeiTiWenJianBuJian::duQuShuJu() {
    QString xuanZe = QFileDialog::getOpenFileName(this, "Select lost+found data",
        QDir::homePath());
    QFile wenJian(xuanZe);
    wenJian.open(QIODevice::ReadOnly);
    if (!wenJian.isOpen())
        return false;
    QDataStream shuRuLiu(&wenJian);
    shuRuLiu >> *duoMeiTiWenJian;
    return shuRuLiu.status() == QDataStream::Ok;
}//实现文件的读取

DuoMeiTiWenJianBuJian::~DuoMeiTiWenJianBuJian() {
    delete ui;
}//删除界面结束程序

}
