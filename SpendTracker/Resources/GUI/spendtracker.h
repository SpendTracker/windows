#ifndef SPENDTRACKER_H
#define SPENDTRACKER_H

#include <QtWidgets/QMainWindow>
#include "ui_spendtracker.h"

class SpendTracker : public QMainWindow
{
	Q_OBJECT

public:
	SpendTracker(QWidget *parent = 0);
	~SpendTracker();

private slots:
	int on_pushButton_clicked();

private:
	Ui::SpendTrackerClass ui;
};

#endif // SPENDTRACKER_H
