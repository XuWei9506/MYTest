#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

#include "MyWidget.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  //Ӧ�ó����࣬ÿ��qt����ֻ��һ��only
	// �����࣬Ĭ�ϲ���ʾ��������QWidget

    MyWidget w;

	// ��ʾ����
    w.show();

	
    return a.exec(); //���������Ϣѭ�����ȴ�ĳЩ��Ϣ���û�����
}
