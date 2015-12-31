#include "spendtracker.h"

SpendTracker::SpendTracker(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

SpendTracker::~SpendTracker()
{

}

int SpendTracker::on_pushButton_clicked() 
{
	ui.pushButton->setText("Oh YEA");
	return 0;
}
