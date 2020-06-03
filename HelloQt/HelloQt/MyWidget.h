#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyWidget.h"
#include <QDialog>
#include <qpushbutton.h>
#include "subwidget.h"



class MyWidget : public QWidget
{
    Q_OBJECT    //如果使用信号和槽，必须添加这个

public:
    MyWidget(QWidget *parent = Q_NULLPTR);
	~MyWidget();

//public slots:
	// 自定义槽函数
	void slotForMyWidget();
	void slotHideMe();
	//void slotShowMe();

private:
    Ui::MyWidgetClass ui;
	QPushButton b1;
	QPushButton *b2;
	QPushButton* b3;//显示子窗口

	//子窗口对象
	subwidget subw;
};
