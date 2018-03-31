#ifndef ROBOTCONTROL_H
#define ROBOTCONTROL_H

#include <QtWidgets/QMainWindow>
#include "ui_robotcontrol.h"
#include "SharedMemory.h"
#include "remoteApi\extApi.h"
#include <iostream>
#include <string>


class robotcontrol : public QMainWindow
{
	Q_OBJECT

public:
	robotcontrol(QWidget *parent = 0);
	~robotcontrol(){};

private slots:
	void on_Setof_clicked();
	void on_servo_on_btn_clicked();
	void on_servo_off_btn_clicked();
	void on_p2p_ctr_btn_clicked();

private:
	Ui::robotcontrolClass ui;
};

#endif // ROBOTCONTROL_H
