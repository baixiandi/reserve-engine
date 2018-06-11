#ifndef _REGS_CONTROL_H_
#define _REGS_CONTROL_H_

#include <QTableWidget>
#include <string>

class RegsControl:public QTableWidget{
	Q_OBJECT
	private:
		std::string regname_eax,regname_ebx;
	public:
		RegsControl(QWidget *parent);
		~RegsControl();
};

#endif