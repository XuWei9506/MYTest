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
	//�Զ����źţ���������
	void sigSub();
	/*
	1.�����в���
	2.��������
	3.����ֵΪvoid
	4.�����źţ�emit + �ź���
	*/
public slots:
void myslot();

private:
	QPushButton* b1;
	Ui::subwidget ui;
};
