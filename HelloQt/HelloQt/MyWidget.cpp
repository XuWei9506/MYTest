#ifdef WIN32  
#pragma execution_character_set("utf-8")  //������������
#endif

#include "MyWidget.h"
#include "MyButton.h"
 
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	/*
		���������Ҫ����������һ�����ڣ�����Ҫ���������ָ������
		��������ʾ��ʱ���Ӵ���Ҳ����֮��ʾ
	*/
	// ��ʼ��
	b2 = new QPushButton("btn2",this);
	//b2->show();

	b1.setParent(this);
	b1.setText("btn1");

	b1.move(20, 20);//�ı�λ�ã�ע�ⴰ������ϵԭ�������Ͻ�

	//�ڴ���ջ���
	//1. ��QObject������ֱ�ӻ��߼��
	//2. ָ�����࣬w������������ʱ���������ࣨ����еĻ���

	//�����Զ���İ�ť����
	MyButton* btn = new MyButton(this);
	btn->setText("btn3");
	btn->move(50, 50);
	btn->resize(50,50);

	//���ô��ڵı���
	this->setWindowTitle("������");
	this->resize(300,300);
	//�������óɴ��ڴ�С�̶�ֵ����ʱ�޷��϶�
	//this->setFixedHeight(200);
	//this->setFixedWidth(400);
	
	//���ô���ͼ��
	this->setWindowIcon(QIcon("F:\\face.png"));

	//���� b1�رմ���
	//connect(b1,�����źţ�this�������źŵĽ���);
	//connect(&b1,&QPushButton::clicked,this,&MyWidget::close);
	/*
	b1:�źŵķ����ߣ���һ��ָ��
	&QPushButton::clicked���źŷ����ߣ��ڲ����ź� ��ʽΪ& + �źŷ������������+�źŵ�����
	this:�źŵĽ����ߣ��˲���Ҳ��һ��ָ��
	&MyWidget::close���źŵĴ�����������this

	qt�źźͲ۶��Ǻ���
	1.�ź�ֻ�к������壬����Ҫ�κ���ʽ��ʵ�ִ���
	2.�ۺ�����Ҫ����Ҳ��Ҫ���壬�ص�����
	*/

	//�Զ���ۺ���
	/*
	1.�κγ�Ա������static ������ȫ�ֺ����� Lambda ���ʽ(��ʽ����)��������Ϊ�ۺ���
	2.�ۺ�����Ҫ���źŶ�Ӧ������ֵ��������
	3.�ź�û�з���ֵ���ۺ�������ֵ��void
	4.void mysig(int, double, QString);
	  void myslot(int ,double, QString);
	5.�ۺ����Ĳ�����Ϊ�˽����źŴ�����������
	6.�ۺ����Ĳ����������ܳ����źŴ������Ĳ�������
	7.�ۺ�����������
	*/
	connect(&b1,&QPushButton::released,this,&MyWidget::slotForMyWidget);

	//b3 ��ʾ�Ӵ���subwidget --subw
	b3 = new QPushButton("�л����ӹ�˾",this);
	b3->resize(100,50);
	b3->move(200,200);

	connect(b3,&QPushButton::clicked,this,&MyWidget::slotHideMe);

	//connect(&subw,&subwidget::sigSub,this,&MyWidget::slotShowMe);
}

MyWidget::~MyWidget()
{
}

void MyWidget::slotForMyWidget()
{
	b2->setText("�ұ�btn1������");
}

void MyWidget::slotHideMe()
{
	hide();

	subw.show();
}
//
//void MyWidget::slotShowMe()
//{
//	subw.hide();
//	show();
//}


