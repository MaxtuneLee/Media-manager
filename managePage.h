#ifndef MEDIA_MANAGER_MANAGEPAGE_H
#define MEDIA_MANAGER_MANAGEPAGE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class managePage; }
QT_END_NAMESPACE

namespace mediaManager {
	//定义筛选器类和数据类
	class MediaFile;
	class mediaFliter;
	class managePage : public QWidget {
		Q_OBJECT

	public:
		managePage(QWidget* parent = nullptr);
		~managePage();

		//定义界面、数据和筛选器
	private:
		Ui::managePage* ui;
		MediaFile* mediaFile;
		mediaFliter* mediaFilter;

		//定义数据保存路径和读取情况
	public slots:
		QString dataSave();
		bool dataRead();

		//声明登记数据函数
	private slots:
		void dataRemove();
	};

}
#endif
