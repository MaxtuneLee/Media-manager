#include "DuoMeiTiWenJianBuJian.h"
#include "ui_DuoMeiTiWenJianBuJian.h"
#include "DuoMeiTiWenJian.h"
#include "DuoMeiTiWenJianShaiXuan.h"

#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtWidgets/QFileDialog>

namespace mediaManager {

MediaComponent::MediaComponent(QWidget *parent)
    : QWidget(parent), ui(new Ui::MediaComponent)
    , mediaFile(new MediaFile(this)), mediaFilter(new MediaFliter(1, this))//新建界面、数据和筛选器
{
    ui->setupUi(this);
    mediaFilter->setSourceModel(mediaFile);
    ui->duoMeiTiWenJianXianShi->setModel(mediaFilter);
    ui->duoMeiTiWenJianXianShi->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->duoMeiTiWenJianXianShi->setSortingEnabled(true);//建立界面并把界面内容传递给筛选器

    connect(ui->dengJiAnNiu, &QPushButton::clicked, this, [this]() {
        mediaFile->insertRow(mediaFile->rowCount());
    });
    connect(ui->queRenDengJiAnNiu, &QPushButton::clicked,
            this, &MediaComponent::dataRegister);
    connect(ui->baoCunAnNiu, &QPushButton::clicked,
            this, &MediaComponent::dataSave);
    connect(ui->duQuAnNiu, &QPushButton::clicked,
            this, &MediaComponent::dataRead);
    connect(ui->zuiZaoRiQiBianJI, &QDateEdit::dateChanged,
            mediaFilter, &MediaFliter::minimumDate);
    connect(ui->neiRong, &QLineEdit::textEdited, mediaFilter, &MediaFliter::setInput);
    connect(ui->SheZhiShaiXuanLie, &QComboBox::currentTextChanged,mediaFilter, &MediaFliter::filterColumn);
    connect(ui->zuiWanRiQiBianJI, &QDateEdit::dateChanged,
            mediaFilter, &MediaFliter::maximumDate);
}//将界面上的按钮和输入框与函数链接

void MediaComponent::dataRegister() {
    auto suoYouXuanZe = ui->duoMeiTiWenJianXianShi->selectionModel()->selectedIndexes();
    for (const QModelIndex& xuanZe : suoYouXuanZe) {
        mediaFile->removeRow(xuanZe.row());//删除所选数据
    }
}

QString MediaComponent::dataSave() {
    QDir d = QDir::home();
    d.mkdir("Information");
    d.cd("Information");
    QString shiJiLuJing = QFileDialog::getSaveFileName(this, "标题", QDir::homePath());
    QFile f(shiJiLuJing);
    f.open(QIODevice::WriteOnly);
    QDataStream shuChuLiu(&f);
    shuChuLiu << *mediaFile;
    return shiJiLuJing;
}//实现文件的保存

bool MediaComponent::dataRead() {
    QString xuanZe = QFileDialog::getOpenFileName(this, "Select lost+found data",
        QDir::homePath());
    QFile wenJian(xuanZe);
    wenJian.open(QIODevice::ReadOnly);
    if (!wenJian.isOpen())
        return false;
    QDataStream shuRuLiu(&wenJian);
    shuRuLiu >> *mediaFile;
    return shuRuLiu.status() == QDataStream::Ok;
}//实现文件的读取

MediaComponent::~MediaComponent() {
    delete ui;
}//删除界面结束程序

}
