#include <QTextCodec>
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include <QColor>
#include "./controls/GraphicsControl.h"
#include "./controls/RegsControl.h"
#include "./controls/MemControl.h"

int main(int argc,char *argv[]){
	
	
	//程序app实例
	QApplication app(argc,argv);
	
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	//程序主窗体
	QMainWindow *main_widget=new QMainWindow();
	
	
	QSplitter *main_splitter=new QSplitter(main_widget);
	main_splitter->setOrientation(Qt::Vertical);
	
	//主窗体布局
	GraphicsControl *top=new GraphicsControl(main_splitter);
	top->setColor(255,0,0);
	QSplitter *mid_splitter=new QSplitter(main_splitter);
	//mid->setColor(0,255,0);
	GraphicsControl *bottom=new GraphicsControl(main_splitter);
	bottom->setColor(0,0,255);
	
	main_splitter->setOpaqueResize(false);
	main_splitter->addWidget(top);
	main_splitter->addWidget(mid_splitter);
	main_splitter->addWidget(bottom);
	
	//设置mid的布局
	//QSplitter *mid_splitter=new QSplitter(mid);
	mid_splitter->setVisible(true);
	GraphicsControl *left=new GraphicsControl(mid_splitter);
	left->setColor(90,0,0);
	GraphicsControl *center=new GraphicsControl(mid_splitter);
	center->setColor(0,90,0);
	GraphicsControl *right=new GraphicsControl(mid_splitter);
	//right->setColor(0,0,90);
	
	
	mid_splitter->setOpaqueResize(false);
	mid_splitter->addWidget(left);
	mid_splitter->addWidget(center);
	mid_splitter->addWidget(right);
	mid_splitter->setStretchFactor(0,1);
	mid_splitter->setStretchFactor(1,1);
	mid_splitter->setStretchFactor(2,1);
	
	QList<int> list;
	list.append(100);
	list.append(400);
	list.append(100);
	main_splitter->setSizes(list);
	
	//添加寄存器窗体
	QSplitter *reg_mem_splitter=new QSplitter(right);
	reg_mem_splitter->setOrientation(Qt::Vertical);
	RegsControl *regscontrol=new RegsControl(reg_mem_splitter);
	MemControl *memcontrol=new MemControl(reg_mem_splitter);
	reg_mem_splitter->addWidget(regscontrol);
	reg_mem_splitter->addWidget(memcontrol);
	reg_mem_splitter->setStretchFactor(0,1);
	reg_mem_splitter->setStretchFactor(1,1);
	//right->addWidget(regscontrol);
	
	//显示主窗体
	main_widget->setCentralWidget(main_splitter);
	main_widget->resize(800,600);
	main_widget->show();
	return app.exec();
}
