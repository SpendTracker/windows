#include "spendtracker.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SpendTracker w;
	w.show();
	return a.exec();
}
