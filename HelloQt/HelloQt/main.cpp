#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include "MyWidget.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  //应用程序类，每个qt程序只有一个only
	// 窗口类，默认不显示，基类是QWidget

    MyWidget w;

	// 显示窗口
    w.show();

	
    return a.exec(); //程序进入消息循环，等待某些消息和用户处理
}
