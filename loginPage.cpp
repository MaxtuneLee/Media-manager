#include "loginPage.h"
#include "ui_loginPage.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QPainter>
#include <QMouseEvent>

namespace mediaManager {

	//将验证界面的输入行和按钮和函数链接
	loginPage::loginPage(const QString& path, QWidget* component) :
		QDialog(component), ui(new Ui::loginPage), shuJuLuJing(path)//新建验证界面和验证器
	{
		ui->setupUi(this);
		//让窗口透明
		setWindowFlags(Qt::FramelessWindowHint);
		QFile f(path);
		f.open(QIODevice::ReadOnly);
		//建立界面读取口令内容
		QDataStream outputStream(&f);
		outputStream >> userData;
		connect(ui->submitButton, &QPushButton::clicked,
			this, &loginPage::submit);
		connect(this, &loginPage::loginSuccess, this, &QDialog::accept);

	}
	//监听鼠标按下，实现窗口拖动操作
	void loginPage::mousePressEvent(QMouseEvent* event)
	{
		if (event->button() == Qt::LeftButton) {
			m_startPoint = frameGeometry().topLeft() - event->globalPos();
		}
	}
	//监听鼠标移动，实现窗口拖动效果
	void loginPage::mouseMoveEvent(QMouseEvent* event)
	{
		this->move(event->globalPos() + m_startPoint);
	}
	void loginPage::submit() {
		QString username = "root";
		QByteArray password =
			ui->pwdInput->text().toUtf8();
		if ("root" != password)
			QMessageBox::warning(this, "提示",
				"登录失败，请检查密码是否正确");
		else emit loginSuccess(user = username);//判断是否验证成功
	}

	//删除界面进入下一步
	loginPage::~loginPage()
	{
		delete ui;
	}

	//关闭程序
	void loginPage::on_pushButton_clicked()
	{
		this->close();
	}

}
