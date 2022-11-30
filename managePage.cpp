#include "managePage.h"
#include "ui_managePage.h"
#include "mediaFile.h"
#include "mediaFliter.h"

#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QScrollBar>

namespace mediaManager {
	//设置页面ui操作
	//新建界面、数据和筛选器
	managePage::managePage(QWidget* parent)
		: QWidget(parent), ui(new Ui::managePage)
		, mediaFile(new MediaFile(this)), mediaFilter(new mediaFliter(1, this))
	{
		//建立界面并把界面内容传递给筛选器
		ui->setupUi(this);
		mediaFilter->setSourceModel(mediaFile);
		ui->mediaList->setModel(mediaFilter);
		ui->mediaList->horizontalHeader()
			->setSectionResizeMode(QHeaderView::ResizeToContents);
		ui->mediaList->setSortingEnabled(true);
        ui->mediaList->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{"        //垂直滑块整体
                                                                  "background:#FFFFFF;"  //背景色
                                                                  "padding-top:20px;"    //上预留位置（放置向上箭头）
                                                                  "padding-bottom:20px;" //下预留位置（放置向下箭头）
                                                                  "padding-left:3px;"    //左预留位置（美观）
                                                                  "padding-right:3px;"   //右预留位置（美观）
                                                                  "border-left:1px solid #d7d7d7;}"//左分割线
                                                                  "QScrollBar::handle:vertical{"//滑块样式
                                                                  "background:#dbdbdb;"  //滑块颜色
                                                                  "border-radius:6px;"   //边角圆润
                                                                  "min-height:80px;}"    //滑块最小高度
                                                                  "QScrollBar::handle:vertical:hover{"//鼠标触及滑块样式
                                                                  "background:#d0d0d0;}" //滑块颜色
                                                                  "QScrollBar::add-line:vertical{"//向下箭头样式
                                                                  "image:url(:/images/assets/images/arrow.png) center no-repeat;}"
                                                                  "QScrollBar::sub-line:vertical{"//向上箭头样式
                                                                  "image:url(:/images/assets/images/arrow-up.png) center no-repeat;}");

        ui->mediaList->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{"
                                                                  "background:#FFFFFF;"
                                                                  "padding-top:3px;"
                                                                  "padding-bottom:3px;"
                                                                  "padding-left:20px;"
                                                                  "padding-right:20px;}"
                                                                  "QScrollBar::handle:horizontal{"
                                                                  "background:#dbdbdb;"
                                                                  "border-radius:6px;"
                                                                  "min-width:80px;}"
                                                                  "QScrollBar::handle:horizontal:hover{"
                                                                  "background:#d0d0d0;}"
                                                                  "QScrollBar::add-line:horizontal{"
                                                                  "image:url(:/images/assets/images/arrow-right.png) center no-repeat;}"
                                                                  "QScrollBar::sub-line:horizontal{"
                                                                  "image:url(:/images/assets/images/arrow-left.png) center no-repeat;}");

		//ui和函数的绑定
		connect(ui->registerButton, &QPushButton::clicked, this, [this]() {
			mediaFile->insertRow(mediaFile->rowCount());
			});
		connect(ui->removeButton, &QPushButton::clicked,
			this, &managePage::dataRemove);
		connect(ui->exportButton, &QPushButton::clicked,
			this, &managePage::dataSave);
		connect(ui->importButton, &QPushButton::clicked,
			this, &managePage::dataRead);
		connect(ui->earliestDate, &QDateEdit::dateChanged,
			mediaFilter, &mediaFliter::earliestDate);
		connect(ui->searchValue, &QLineEdit::textEdited, mediaFilter, &mediaFliter::setInput);
		connect(ui->fliterType, &QComboBox::currentTextChanged, mediaFilter, &mediaFliter::filterColumn);
		connect(ui->latestDate, &QDateEdit::dateChanged,
			mediaFilter, &mediaFliter::latestDate);
	}

	//删除所选数据
	void managePage::dataRemove() {
		auto allSelected = ui->mediaList->selectionModel()->selectedIndexes();
		for (const QModelIndex& selected : allSelected) {
			mediaFile->removeRow(selected.row());
		}
	}

	//文件的保存
	QString managePage::dataSave() {
		QDir d = QDir::home();
		d.mkdir("database");
		d.cd("database");
		QString realPath = QFileDialog::getSaveFileName(this, "导出到", QDir::homePath());
		QFile f(realPath);
		f.open(QIODevice::WriteOnly);
		QDataStream outputStream(&f);
		outputStream << *mediaFile;
		return realPath;
	}

	//文件数据读取
	bool managePage::dataRead() {
		QString select = QFileDialog::getOpenFileName(this, "从文件中读取",
			QDir::homePath());
		QFile file(select);
		file.open(QIODevice::ReadOnly);
		if (!file.isOpen())
			return false;
		QDataStream inputStream(&file);
		inputStream >> *mediaFile;
		return inputStream.status() == QDataStream::Ok;
	}//实现文件的读取

	managePage::~managePage() {
		delete ui;
	}//删除界面结束程序

}
