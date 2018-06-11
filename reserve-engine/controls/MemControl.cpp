#include "MemControl.h"

MemControl::MemControl(QWidget *parent=0){
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	this->setColumnCount(3);
	this->setRowCount(2);
	
	this->setItem(0,0,new QTableWidgetItem("0x00400000"));
	this->setItem(0,1,new QTableWidgetItem("0x00400000.bin"));
	this->setItem(0,2,new QTableWidgetItem("0x100000"));
	
	QStringList hlist;
	hlist<<tr("虚拟地址")<<tr("bin文件")<<tr("大小");
	setHorizontalHeaderLabels(hlist);
};
MemControl::~MemControl(){
	
};