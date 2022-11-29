#include "mediaFile.h"

namespace mediaManager {

	//初始化结构体内容
	mediaFile::mediaFile(QString fileName, QString publishDate, QString fileType, QString fileSize, QString director, QString actor, QString award) :
		name(name), date(QDate::currentDate()), publishDate(publishDate), type(fileType), size(fileSize),
		director(director), actor(actor), award(award), views(114) {}

	//初始化列表
	MediaFile::MediaFile(QObject* parent) : QAbstractTableModel{ parent } {}

	//实现界面增加行
	bool MediaFile::insertRows(int row, int col, const QModelIndex& par, QString fileName, QString publishDate, QString fileType, QString fileSize, QString director, QString actor, QString award) {


		if (row > mediaFileStorage.size() || row < 0 || col <= 0)
			return false;
		beginInsertRows(par, row, row + col - 1);
		mediaFileStorage.insert(row, col, mediaFile(fileName, publishDate, fileType, fileSize, director, actor, award));
		endInsertRows();
		return true;
	}

	//实现界面增加行
	bool MediaFile::insertRows(int row, int col, const QModelIndex& par) {

		if (row > mediaFileStorage.size() || row < 0 || col <= 0)
			return false;
		beginInsertRows(par, row, row + col - 1);
		mediaFileStorage.insert(row, col, mediaFile());
		endInsertRows();
		return true;
	}

	//列表头标识显示
	QVariant MediaFile::headerData(int index, Qt::Orientation orientation,
		int role) const {

		if (role != Qt::DisplayRole) return QVariant();

		if (orientation == Qt::Vertical)
			return index + 1; // 0-indexed

		switch (index) {
		case 0: return tr("     名称     ");
		case 1: return tr("      日期      ");
		case 2: return tr("		类型	");
		case 3: return tr("  大小  ");
		case 4: return tr("     导演     ");
		case 5: return tr("     演员     ");
		case 6: return tr("      奖项      ");
		case 7: return tr("		浏览次数	");
		}
		return QVariant();
	}

	//列表显示数据内容
	QVariant MediaFile::data(const QModelIndex& index, int role) const {
		const mediaFile& toShow = mediaFileStorage.at(index.row());

		if (role != Qt::DisplayRole)
			return QVariant();

		switch (index.column()) {
		case 0: return toShow.name;
		case 1: return toShow.date;
		case 2: return toShow.type;
		case 3: return toShow.size;
		case 4: return toShow.director;
		case 5: return toShow.actor;
		case 6: return toShow.award;
		case 7: return toShow.views;
		}
		return QVariant();
	}

}
