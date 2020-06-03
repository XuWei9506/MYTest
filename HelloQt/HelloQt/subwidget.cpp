#include "subwidget.h"

subwidget::subwidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	b1 = new QPushButton("切换到广联达",this);
	b1->resize(20,30);
	b1->move(150,150);

	setWindowTitle("子公司窗口");

	connect(b1,&QPushButton::clicked, this,&subwidget::myslot);

	resize(300,300);

}

subwidget::~subwidget()
{
}

void subwidget::myslot()
{
	emit sigSub();
}




