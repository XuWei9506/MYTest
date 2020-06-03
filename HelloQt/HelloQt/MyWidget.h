#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyWidget.h"
#include <QDialog>
#include <qpushbutton.h>
#include "subwidget.h"



class MyWidget : public QWidget
{
    Q_OBJECT    //���ʹ���źźͲۣ�����������

public:
    MyWidget(QWidget *parent = Q_NULLPTR);
	~MyWidget();

//public slots:
	// �Զ���ۺ���
	void slotForMyWidget();
	void slotHideMe();
	//void slotShowMe();

private:
    Ui::MyWidgetClass ui;
	QPushButton b1;
	QPushButton *b2;
	QPushButton* b3;//��ʾ�Ӵ���

	//�Ӵ��ڶ���
	subwidget subw;
};
