#include "WGqtDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WGqtDemo w;
	w.show();
	return a.exec();
}
