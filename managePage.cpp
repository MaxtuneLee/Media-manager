#include "managePage.h"
#include "ui_managePage.h"
#include "mediaFile.h"
#include "mediaFliter.h"

#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtWidgets/QFileDialog>

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
