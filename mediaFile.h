#include <QAbstractTableModel>
#include <QTime>
#include <QDataStream>

namespace mediaManager {

	//声明结构体内容
	struct mediaFile {
		QString name; //文件名称
		QDate date; //添加时间
		QString publishDate; //发行日期
		QString type; //文件类型
		QString size; //大小
		QString director; //导演
		QString actor; //演员
		QString award; //奖项
		qint32 views; //浏览量
	public:
		mediaFile(QString fileName = "一个文件", QString publishDate = "2000-01-01", QString fileType = "MP4", QString fileSize = "120MB", QString director = "lzh,zrj", QString actor = "lzh,zrj", QString award = "超级大奖"); //构造函数
	};

	class MediaFile : public QAbstractTableModel {
		Q_OBJECT
			//建立结构体数组储存数据
			QVector<mediaFile> mediaFileStorage;
	public:
		//void structInit(QString fileName = "一个文件", QString publishDate = "2000-01-01", QString fileType = "MP4", QString fileSize = "120MB", QString director = "lzh,zrj", QString actor = "lzh,zrj", QString award = "超级大奖");
		//增加行
		bool insertRows(int row, int col, const QModelIndex& par, QString fileName = "一个文件", QString publishDate = "2000-01-01", QString fileType = "MP4", QString fileSize = "120MB", QString director = "lzh,zrj", QString actor = "lzh,zrj", QString award = "超级大奖");
		bool insertRows(int row, int col, const QModelIndex & = QModelIndex()) override;
		//删除行
		bool removeRows(int row, int col, const QModelIndex & = QModelIndex()) override {};
		//定义界面总列数
		int columnCount(const QModelIndex & = QModelIndex()) const override { return 8; }
		//计算数据条数
		int rowCount(const QModelIndex & = QModelIndex()) const override {
			return mediaFileStorage.size();
		}

		//声明界面布局函数
		QVariant headerData(int index, Qt::Orientation orientation,
			int role = Qt::DisplayRole) const override;
		//声明界面显示控制函数
		QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
		//获取数据信息
		const QVector<mediaFile>& getMediaFileStorage() const { return mediaFileStorage; }
		explicit MediaFile(QObject* parent = nullptr);
	};

}

