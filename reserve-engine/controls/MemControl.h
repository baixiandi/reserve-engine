#ifndef _MEM_CONTROL_H_
#define _MEM_CONTROL_H_
#include <QTableWidget>
#include <QTextCodec>
class MemControl:public QTableWidget{
	Q_OBJECT
	private:
		int mem_count;
	public:
		MemControl(QWidget *parent);
		~MemControl();
};

#endif