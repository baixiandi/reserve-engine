#include "GraphicsControl.h"


GraphicsControl::GraphicsControl(QWidget *parent){
	_hascolor=false;
};
GraphicsControl::~GraphicsControl(){
	
};
void GraphicsControl::setColor(unsigned short r,unsigned short g,unsigned short b){
	this->_color.setRgb(r,g,b,255);
	_hascolor=true;
}
void GraphicsControl::paintEvent(QPaintEvent * event){
	if(_hascolor==false)
		return;
	QPainter painter(this);
	
	setAutoFillBackground(true);
	setPalette(QPalette(_color));
	painter.setBrush(this->_brush);
	painter.fillRect(this->rect(),this->_brush);
}
