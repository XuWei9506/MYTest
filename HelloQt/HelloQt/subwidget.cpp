#include "subwidget.h"

subwidget::subwidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	b1 = new QPushButton("�л���������",this);
	b1->resize(20,30);
	b1->move(150,150);

	setWindowTitle("�ӹ�˾����");

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




