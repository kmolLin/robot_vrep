#include "robotcontrol.h"

//extern SHV *shv;
QString serverIP("127.0.0.1");
const char *ip = "127.0.0.1";
std::string ServerIP = "127.0.0.1";

int serverPort = 19999;
//int clientID = simxStart((simxChar*)ServerIP.c_str(), serverPort, true, true, 2000, 5);

robotcontrol::robotcontrol(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	for (int row = 0; row < 4; row++){
		QDoubleSpinBox *spinbox = new QDoubleSpinBox();
		spinbox->setMaximum(10000);
		spinbox->setMinimum(-10000);
		spinbox->setEnabled(false);
		ui.offsettable->setCellWidget(row, 1, spinbox);
	}
	for (int row = 0; row < 6; row++){
		QDoubleSpinBox *spinbox = new QDoubleSpinBox();
		spinbox->setMaximum(10000);
		spinbox->setMinimum(-10000);
		spinbox->setEnabled(false);
		ui.jointtable->setCellWidget(row, 1, spinbox);
	}
	for (int row = 0; row < 6; row++){
		QDoubleSpinBox *spinbox = new QDoubleSpinBox();
		spinbox->setMaximum(10000);
		spinbox->setMinimum(-10000);
		spinbox->setEnabled(false);
		ui.tcptable->setCellWidget(row, 1, spinbox);
	}
	 shv = new SHV;
	
}

void robotcontrol::on_Setof_clicked()
{
	//static_cast<QDoubleSpinBox*>(ui.offsettable->cellWidget(1, 1))->setValue(123);
	ui.loadfile->setEnabled(false);
	for (int i = 0; i < 4; i++)
		static_cast<QDoubleSpinBox*>(ui.offsettable->cellWidget(i, 1))->setValue(123);


}

void robotcontrol::on_servo_on_btn_clicked()
{
	// servo on begin
	ui.servo_on_btn->setEnabled(false);
	ui.stop_btn->setEnabled(false);
	ui.servo_off_btn->setEnabled(true);
	ui.home_btn->setEnabled(true);
	ui.joint_ctr_btn->setEnabled(true);
	ui.p2p_ctr_btn->setEnabled(true);
	ui.cp_ctr_btn->setEnabled(true);
	ui.axiscombox->setEnabled(true);
	ui.jog_n_btn->setEnabled(true);
	ui.jog_p_btn->setEnabled(true);
	ui.enter_btn->setEnabled(true);
	ui.loadfile->setEnabled(true);
	ui.setoffset_btn->setEnabled(true);
	shv->UIServoOnOff = 1; // ming cheng lin QQ

}

void robotcontrol::on_servo_off_btn_clicked()
{
	// servo off 
	// TODO: add the program define in button control
	shv->UIServoOnOff = 2;
}

void robotcontrol::on_p2p_ctr_btn_clicked()
{
	shv->UIP2PCtr = 1;
}