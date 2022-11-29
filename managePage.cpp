#include "managePage.h"
#include "ui_managePage.h"
#include "mediaFile.h"

#include <QtCore/QDir>
#include <QtCore/QFile>
#include <QtCore/QDataStream>
#include <QtWidgets/QFileDialog>

namespace mediaManager {
	//设置页面ui操作
	//新建界面、数据和筛选器
	managePage::managePage(QWidget* parent)
		: QWidget(parent), ui(new Ui::managePage)
		, mediaFile(new MediaFile(this))
	{
		//建立界面传递界面内容
		ui->setupUi(this);
		ui->mediaList->setModel(mediaFile);
		ui->mediaList->horizontalHeader()
			//自适应内容宽度
			->setSectionResizeMode(QHeaderView::ResizeToContents);
		//加几个测试数据
		mediaFile->insertRow(mediaFile->rowCount());
		mediaFile->insertRow(mediaFile->rowCount());
		mediaFile->insertRow(mediaFile->rowCount());
		mediaFile->insertRow(mediaFile->rowCount());
	}

	//删除界面结束程序
	managePage::~managePage() {
		delete ui;
	}

}
