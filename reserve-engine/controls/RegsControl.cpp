#include "RegsControl.h"
#include <QTextCodec>

RegsControl::RegsControl(QWidget *parent=0){
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	this->setColumnCount(2);
	this->setRowCount(9);
	
	this->setItem(0,0,new QTableWidgetItem("EAX"));
	this->setItem(1,0,new QTableWidgetItem("ECX"));
	this->setItem(2,0,new QTableWidgetItem("EDX"));
	this->setItem(3,0,new QTableWidgetItem("EBX"));
	this->setItem(4,0,new QTableWidgetItem("ESI"));
	this->setItem(5,0,new QTableWidgetItem("EDI"));
	this->setItem(6,0,new QTableWidgetItem("ESP"));
	this->setItem(7,0,new QTableWidgetItem("EBP"));
	this->setItem(8,0,new QTableWidgetItem("EFLAGS"));
	
	QStringList hlist;
	hlist<<tr("寄存器")<<tr("值");
	setHorizontalHeaderLabels(hlist);
};
RegsControl::~RegsControl(){
	
}