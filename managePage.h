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
        managePage(QWidget* parent=nullptr);
		~managePage();
		MediaFile* mediaFile;

		//定义界面、数据和筛选器
	private:
		Ui::managePage* ui;
		mediaFliter* mediaFilter;

	};

}
