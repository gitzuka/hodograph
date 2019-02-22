#include "Hodograph.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Hodograph w;
	w.show();
	return a.exec();
}
