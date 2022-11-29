#include "mediaFliter.h"

#include <QDateTime>

namespace mediaManager {

	//判断日期是否在范围内
	mediaFliter::mediaFliter(int dateCol, QObject* parent)
		: QSortFilterProxyModel{ parent }, dateColumn(dateCol) {}
	bool mediaFliter::dataRange(QDate date) const {
		if (!date.isValid())
			return false;
		return (!earliest.isValid() || date > earliest)
			&& (!lastest.isValid() || date < lastest);
	}

	//获取传递时间下限
	void mediaFliter::earliestDate(QDate date) {
		earliest = date;
		invalidateFilter();
	}

	//获取传递时间上限
	void mediaFliter::latestDate(QDate date) {
		lastest = date;
		invalidateFilter();
	}

	//根据筛选内容确定数据所在列
	void mediaFliter::filterColumn(QString column) {
		if (column.compare("Name") == 0) dateColumn = 0;
		if (column.compare("Type") == 0) dateColumn = 2;
		if (column.compare("Director") == 0) dateColumn = 4;
		if (column.compare("Actor") == 0) dateColumn = 5;
		if (column.compare("Prize") == 0) dateColumn = 6;
		//使当前筛选无效化
		invalidateFilter();
	}

	//判断数据是否符合搜索内容
	bool mediaFliter::isEligible(QString data) const {
		if (data.isEmpty())
			return false;

		if ((input.compare(data) == 0) || input.isEmpty())
			return true;
		return false;
	}

	bool mediaFliter::filterAcceptsRow(int sourceRow,
		const QModelIndex& sp) const
	{
		//调用判断函数返回是否需要被筛选并实现筛选
		QModelIndex dateIndex = sourceModel()->index(sourceRow, dateColumn, sp);
		QModelIndex dataIndexHead = sourceModel()->index(sourceRow, 1, sp);
		return (isEligible(sourceModel()->data(dateIndex).toString())
			&& QSortFilterProxyModel::filterAcceptsRow(sourceRow, sp))
			&& (dataRange(sourceModel()->data(dataIndexHead).toDate())
				&& QSortFilterProxyModel::filterAcceptsRow(sourceRow, sp));
	}
	void mediaFliter::setInput(QString value) {
		input = value;
		invalidateFilter();
	}//获取传递输入内容

}
