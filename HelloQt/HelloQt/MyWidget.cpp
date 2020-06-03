#ifdef WIN32  
#pragma execution_character_set("utf-8")  //中文乱码问题
#endif

#include "MyWidget.h"
#include "MyButton.h"
 
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	/*
		如果窗口需要依附于另外一个窗口，就需要给这个窗口指定父类
		父窗口显示的时候子窗口也会随之显示
	*/
	// 初始化
	b2 = new QPushButton("btn2",this);
	//b2->show();

	b1.setParent(this);
	b1.setText("btn1");

	b1.move(20, 20);//改变位置，注意窗口坐标系原点在左上角

	//内存回收机制
	//1. 从QObject派生，直接或者间接
	//2. 指定父类，w父类在析构的时候析构子类（如果有的话）

	//创建自定义的按钮对象
	MyButton* btn = new MyButton(this);
	btn->setText("btn3");
	btn->move(50, 50);
	btn->resize(50,50);

	//设置窗口的标题
	this->setWindowTitle("广联达");
	this->resize(300,300);
	//可以设置成窗口大小固定值，此时无法拖动
	//this->setFixedHeight(200);
	//this->setFixedWidth(400);
	
	//设置窗口图标
	this->setWindowIcon(QIcon("F:\\face.png"));

	//需求 b1关闭窗口
	//connect(b1,发出信号，this，处理信号的接收);
	//connect(&b1,&QPushButton::clicked,this,&MyWidget::close);
	/*
	b1:信号的发出者，是一个指针
	&QPushButton::clicked：信号发出者，内部的信号 格式为& + 信号发出者类的名字+信号的名字
	this:信号的接收者，此参数也是一个指针
	&MyWidget::close：信号的处理函数，属于this

	qt信号和槽都是函数
	1.信号只有函数定义，不需要任何形式的实现代码
	2.槽函数需要声明也需要定义，回调函数
	*/

	//自定义槽函数
	/*
	1.任何成员函数、static 函数、全局函数和 Lambda 表达式(隐式函数)都可以作为槽函数
	2.槽函数需要与信号对应（返回值，参数）
	3.信号没有返回值，槽函数返回值：void
	4.void mysig(int, double, QString);
	  void myslot(int ,double, QString);
	5.槽函数的参数是为了接收信号传过来的数据
	6.槽函数的参数个数不能超过信号传过来的参数个数
	7.槽函数可以重载
	*/
	connect(&b1,&QPushButton::released,this,&MyWidget::slotForMyWidget);

	//b3 显示子窗口subwidget --subw
	b3 = new QPushButton("切换到子公司",this);
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
	b2->setText("我被btn1改名了");
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


