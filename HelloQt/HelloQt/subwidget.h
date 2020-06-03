#pragma once
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include <QWidget>
#include <qpushbutton.h>
#include "ui_subwidget.h"

class subwidget : public QWidget
{
	Q_OBJECT

public:
	explicit subwidget(QWidget *parent = 0);
	~subwidget();

signals:
	//自定义信号，必须声明
	void sigSub();
	/*
	1.可以有参数
	2.可以重载
	3.返回值为void
	4.发送信号：emit + 信号名
	*/
public slots:
void myslot();

private:
	QPushButton* b1;
	Ui::subwidget ui;
};
