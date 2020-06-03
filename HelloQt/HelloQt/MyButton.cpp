#include "MyButton.h"
#include <qdebug.h>


MyButton::MyButton(QWidget *parent):QPushButton(parent)
{

}


MyButton::~MyButton()
{
	qDebug() << "this is mybutton!";
}
