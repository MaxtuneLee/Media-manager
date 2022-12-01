#include "mediaFile.h"

namespace mediaManager {

	//初始化结构体内容
	mediaFile::mediaFile() :
		name(""), date(QDate::currentDate()), publishDate("2000-01-01"), type(""), size(""),
		director(""), actor(""), award(""), views(0) {}

	//数据的保存
	QDataStream& operator<<(QDataStream& fileStream, const mediaFile& mediaFile) {
		return fileStream << mediaFile.name << mediaFile.date << mediaFile.type
			<< mediaFile.size << mediaFile.director << mediaFile.actor
			<< mediaFile.award << mediaFile.views;
	}
	//数据的读取
	QDataStream& operator>>(QDataStream& fileStream, mediaFile& mediaFile) {
		return fileStream >> mediaFile.name >> mediaFile.date >> mediaFile.type
			>> mediaFile.size >> mediaFile.director >> mediaFile.actor
			>> mediaFile.award >> mediaFile.views;
	}

	//初始化列表
	MediaFile::MediaFile(QObject* parent) : QAbstractTableModel{ parent } {}

	//实现界面增加行
	bool MediaFile::insertRows(int row, int col, const QModelIndex& par) {

		if (row > mediaFileStorage.size() || row < 0 || col <= 0)
			return false;
		beginInsertRows(par, row, row + col - 1);
		mediaFileStorage.insert(row, col, mediaFile());
		endInsertRows();
		return true;
	}

	//实现界面移除行
	bool MediaFile::removeRows(int row, int col, const QModelIndex& par) {
		if (row < 0 || col <= 0 || row + col > mediaFileStorage.size())
			return false;
		beginRemoveRows(par, row, row + col - 1);
		mediaFileStorage.remove(row, col);
		endRemoveRows();
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
		case 1: return tr("      发行日期      ");
		case 2: return tr("  类型  ");
		case 3: return tr("  大小  ");
		case 4: return tr("     导演     ");
		case 5: return tr("     演员     ");
		case 6: return tr("      奖项      ");
		case 7: return tr("  浏览次数  ");
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

	//数据编辑控制
	Qt::ItemFlags MediaFile::flags(const QModelIndex& index) const {

		//role更改为可编辑
		return QAbstractTableModel::flags(index) | Qt::ItemIsEditable;
	}

	//数据编辑
	bool MediaFile::setData(const QModelIndex& index, const QVariant& value, int role) {

		if (role != Qt::EditRole) return false;

		auto col = index.column(), row = index.row();
		switch (col) {
		case 0: mediaFileStorage[row].name = value.toString(); break;
		case 1:
			//将输入的日期格式化方便排序与查找
			mediaFileStorage[row].date = QDate::fromString((value.toString()), "yyyy/MM/dd");
			mediaFileStorage[row].publishDate = value.toString();
			break;
		case 2: mediaFileStorage[row].type = value.toString(); break;
		case 3: mediaFileStorage[row].size = value.toString(); break;
		case 4: mediaFileStorage[row].director = value.toString(); break;
		case 5: mediaFileStorage[row].actor = value.toString(); break;
		case 6: mediaFileStorage[row].award = value.toString(); break;
		case 7: mediaFileStorage[row].views = value.toInt(); break;
		default: return false;
		}

		return true;
	}

}
