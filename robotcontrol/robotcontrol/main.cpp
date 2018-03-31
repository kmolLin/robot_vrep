#include "robotcontrol.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	robotcontrol w;
	w.show();
	return a.exec();
}
