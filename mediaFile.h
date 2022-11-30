#ifndef MEDIA_MANAGER_MEDIAFILE_H
#define MEDIA_MANAGER_MEDIAFILE_H

#include <QAbstractTableModel>
#include <QTime>
#include <QDataStream>

namespace mediaManager {

	//声明结构体内容
	struct mediaFile {
		QString name;
		QDate date;
		QString publishDate, type, size, director, actor, award;
		qint32 views;
		mediaFile();
	};

	//声明文件保存与读取函数
	QDataStream& operator<<(QDataStream& fileStream, const mediaFile& mediaFile);
	QDataStream& operator>>(QDataStream& fileStream, mediaFile& mediaFile);

	class MediaFile : public QAbstractTableModel {
		Q_OBJECT
			//建立结构体数组储存数据
			QVector<mediaFile> mediaFileStorage;

		//文件的保存与读取
		friend QDataStream& operator<<(QDataStream& fileStream, const MediaFile& mediaFile) {
			return fileStream << mediaFile.mediaFileStorage;
		}
		friend QDataStream& operator>>(QDataStream& fileStream, MediaFile& mediaFile) {
			mediaFile.beginResetModel();
			fileStream >> mediaFile.mediaFileStorage;
			mediaFile.endResetModel();
			return fileStream;
		}
	public:
		//增加行
		bool insertRows(int row, int col, const QModelIndex & = QModelIndex()) override;
		//删除行
		bool removeRows(int row, int col, const QModelIndex & = QModelIndex()) override;
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
		//声明编辑控制函数
		Qt::ItemFlags flags(const QModelIndex& index) const override;
		//声明数据更改函数
		bool setData(const QModelIndex& index, const QVariant& value,
			int role = Qt::EditRole);
		//获取数据信息
		const QVector<mediaFile>& getMediaFileStorage() const { return mediaFileStorage; }
		explicit MediaFile(QObject* parent = nullptr);
	};

}

#endif
