#ifndef _GRAPHICS_CONTROL_H_
#define _GRAPHICS_CONTROL_H_

#include <QSplitter>
#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QFrame>

class GraphicsControl:public QFrame{
	Q_OBJECT
	public:
		GraphicsControl(QWidget *parent);
		~GraphicsControl();
		void setColor(unsigned short r,unsigned short g,unsigned short b);
		
	protected:
		void paintEvent(QPaintEvent * event);
	private:
		unsigned int _ID;
		QBrush _brush;
		QColor _color;
		bool _hascolor;
};

#endif