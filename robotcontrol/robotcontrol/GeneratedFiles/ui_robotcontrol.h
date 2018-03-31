/********************************************************************************
** Form generated from reading UI file 'robotcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCONTROL_H
#define UI_ROBOTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_robotcontrolClass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QTableWidget *offsettable;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *setoffset_btn;
    QPushButton *loadfile;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *axiscombox;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *jog_p_btn;
    QPushButton *jog_n_btn;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *jointtable;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QSlider *horizontalSlider_3;
    QDoubleSpinBox *doubleSpinBox_33;
    QGroupBox *gridGroupBox;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *tcptable;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QPushButton *start_btn;
    QPushButton *stop_btn;
    QPushButton *servo_on_btn;
    QPushButton *servo_off_btn;
    QPushButton *exit_btn;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *ed_editor;
    QListWidget *list_nc;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_30;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_22;
    QSlider *horizontalSlider;
    QDoubleSpinBox *doubleSpinBox_29;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QSlider *horizontalSlider_2;
    QDoubleSpinBox *doubleSpinBox_31;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBox_32;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *move_btn;
    QPushButton *joint_ctr_btn;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *p2p_ctr_btn;
    QPushButton *cp_ctr_btn;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *enter_btn;
    QPushButton *mode_btn;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *readtxt_btn;
    QPushButton *paint_btn;
    QPushButton *home_btn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *robotcontrolClass)
    {
        if (robotcontrolClass->objectName().isEmpty())
            robotcontrolClass->setObjectName(QStringLiteral("robotcontrolClass"));
        robotcontrolClass->resize(1002, 649);
        centralwidget = new QWidget(robotcontrolClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_12 = new QVBoxLayout(centralwidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        offsettable = new QTableWidget(groupBox);
        if (offsettable->columnCount() < 2)
            offsettable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        offsettable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        offsettable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (offsettable->rowCount() < 4)
            offsettable->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        offsettable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        offsettable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        offsettable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        offsettable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        offsettable->setObjectName(QStringLiteral("offsettable"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(offsettable->sizePolicy().hasHeightForWidth());
        offsettable->setSizePolicy(sizePolicy);
        offsettable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_9->addWidget(offsettable);


        verticalLayout_5->addWidget(groupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        setoffset_btn = new QPushButton(centralwidget);
        setoffset_btn->setObjectName(QStringLiteral("setoffset_btn"));
        setoffset_btn->setEnabled(false);

        horizontalLayout_7->addWidget(setoffset_btn);

        loadfile = new QPushButton(centralwidget);
        loadfile->setObjectName(QStringLiteral("loadfile"));
        loadfile->setEnabled(false);

        horizontalLayout_7->addWidget(loadfile);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        axiscombox = new QComboBox(centralwidget);
        axiscombox->setObjectName(QStringLiteral("axiscombox"));
        axiscombox->setEnabled(false);

        horizontalLayout_9->addWidget(axiscombox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        jog_p_btn = new QPushButton(centralwidget);
        jog_p_btn->setObjectName(QStringLiteral("jog_p_btn"));
        jog_p_btn->setEnabled(false);

        horizontalLayout_8->addWidget(jog_p_btn);

        jog_n_btn = new QPushButton(centralwidget);
        jog_n_btn->setObjectName(QStringLiteral("jog_n_btn"));
        jog_n_btn->setEnabled(false);

        horizontalLayout_8->addWidget(jog_n_btn);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_9);


        horizontalLayout_12->addLayout(verticalLayout_5);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        jointtable = new QTableWidget(groupBox_2);
        if (jointtable->columnCount() < 2)
            jointtable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        jointtable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        jointtable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        if (jointtable->rowCount() < 6)
            jointtable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        jointtable->setVerticalHeaderItem(5, __qtablewidgetitem13);
        jointtable->setObjectName(QStringLiteral("jointtable"));
        jointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_10->addWidget(jointtable);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_17->addWidget(label_25);

        horizontalSlider_3 = new QSlider(groupBox_2);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(horizontalSlider_3);

        doubleSpinBox_33 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_33->setObjectName(QStringLiteral("doubleSpinBox_33"));

        horizontalLayout_17->addWidget(doubleSpinBox_33);


        verticalLayout_10->addLayout(horizontalLayout_17);


        horizontalLayout_12->addWidget(groupBox_2);

        gridGroupBox = new QGroupBox(centralwidget);
        gridGroupBox->setObjectName(QStringLiteral("gridGroupBox"));
        verticalLayout_11 = new QVBoxLayout(gridGroupBox);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        tcptable = new QTableWidget(gridGroupBox);
        if (tcptable->columnCount() < 2)
            tcptable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tcptable->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tcptable->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        if (tcptable->rowCount() < 6)
            tcptable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tcptable->setVerticalHeaderItem(5, __qtablewidgetitem21);
        tcptable->setObjectName(QStringLiteral("tcptable"));
        tcptable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_11->addWidget(tcptable);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        radioButton = new QRadioButton(gridGroupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(false);
        radioButton->setChecked(true);

        horizontalLayout_16->addWidget(radioButton);

        radioButton_2 = new QRadioButton(gridGroupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(false);

        horizontalLayout_16->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(gridGroupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setEnabled(false);

        horizontalLayout_16->addWidget(radioButton_3);


        verticalLayout_11->addLayout(horizontalLayout_16);


        horizontalLayout_12->addWidget(gridGroupBox);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        start_btn = new QPushButton(centralwidget);
        start_btn->setObjectName(QStringLiteral("start_btn"));
        start_btn->setEnabled(false);

        verticalLayout_2->addWidget(start_btn);

        stop_btn = new QPushButton(centralwidget);
        stop_btn->setObjectName(QStringLiteral("stop_btn"));
        stop_btn->setEnabled(false);

        verticalLayout_2->addWidget(stop_btn);

        servo_on_btn = new QPushButton(centralwidget);
        servo_on_btn->setObjectName(QStringLiteral("servo_on_btn"));

        verticalLayout_2->addWidget(servo_on_btn);

        servo_off_btn = new QPushButton(centralwidget);
        servo_off_btn->setObjectName(QStringLiteral("servo_off_btn"));
        servo_off_btn->setEnabled(false);

        verticalLayout_2->addWidget(servo_off_btn);

        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName(QStringLiteral("exit_btn"));

        verticalLayout_2->addWidget(exit_btn);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ed_editor = new QLineEdit(centralwidget);
        ed_editor->setObjectName(QStringLiteral("ed_editor"));

        verticalLayout_3->addWidget(ed_editor);

        list_nc = new QListWidget(centralwidget);
        list_nc->setObjectName(QStringLiteral("list_nc"));

        verticalLayout_3->addWidget(list_nc);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_21);

        doubleSpinBox_30 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_30->setObjectName(QStringLiteral("doubleSpinBox_30"));

        horizontalLayout->addWidget(doubleSpinBox_30);


        horizontalLayout_3->addLayout(horizontalLayout);

        pushButton_5 = new QPushButton(groupBox_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_4->addWidget(label_22);

        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);

        doubleSpinBox_29 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_29->setObjectName(QStringLiteral("doubleSpinBox_29"));

        horizontalLayout_4->addWidget(doubleSpinBox_29);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_5->addWidget(label_23);

        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        doubleSpinBox_31 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_31->setObjectName(QStringLiteral("doubleSpinBox_31"));

        horizontalLayout_5->addWidget(doubleSpinBox_31);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_24);

        doubleSpinBox_32 = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_32->setObjectName(QStringLiteral("doubleSpinBox_32"));

        horizontalLayout_6->addWidget(doubleSpinBox_32);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_7->addWidget(groupBox_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        move_btn = new QPushButton(centralwidget);
        move_btn->setObjectName(QStringLiteral("move_btn"));
        move_btn->setEnabled(false);

        horizontalLayout_13->addWidget(move_btn);

        joint_ctr_btn = new QPushButton(centralwidget);
        joint_ctr_btn->setObjectName(QStringLiteral("joint_ctr_btn"));
        joint_ctr_btn->setEnabled(false);

        horizontalLayout_13->addWidget(joint_ctr_btn);


        verticalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        p2p_ctr_btn = new QPushButton(centralwidget);
        p2p_ctr_btn->setObjectName(QStringLiteral("p2p_ctr_btn"));
        p2p_ctr_btn->setEnabled(false);

        horizontalLayout_14->addWidget(p2p_ctr_btn);

        cp_ctr_btn = new QPushButton(centralwidget);
        cp_ctr_btn->setObjectName(QStringLiteral("cp_ctr_btn"));
        cp_ctr_btn->setEnabled(false);

        horizontalLayout_14->addWidget(cp_ctr_btn);


        verticalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        enter_btn = new QPushButton(centralwidget);
        enter_btn->setObjectName(QStringLiteral("enter_btn"));
        enter_btn->setEnabled(false);

        horizontalLayout_15->addWidget(enter_btn);

        mode_btn = new QPushButton(centralwidget);
        mode_btn->setObjectName(QStringLiteral("mode_btn"));
        mode_btn->setEnabled(false);

        horizontalLayout_15->addWidget(mode_btn);


        verticalLayout_8->addLayout(horizontalLayout_15);


        verticalLayout_7->addLayout(verticalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        readtxt_btn = new QPushButton(centralwidget);
        readtxt_btn->setObjectName(QStringLiteral("readtxt_btn"));
        readtxt_btn->setEnabled(false);

        horizontalLayout_18->addWidget(readtxt_btn);

        paint_btn = new QPushButton(centralwidget);
        paint_btn->setObjectName(QStringLiteral("paint_btn"));
        paint_btn->setEnabled(false);

        horizontalLayout_18->addWidget(paint_btn);

        home_btn = new QPushButton(centralwidget);
        home_btn->setObjectName(QStringLiteral("home_btn"));
        home_btn->setEnabled(false);

        horizontalLayout_18->addWidget(home_btn);


        horizontalLayout_11->addLayout(horizontalLayout_18);


        verticalLayout_7->addLayout(horizontalLayout_11);


        horizontalLayout_10->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(horizontalLayout_10);


        verticalLayout_12->addLayout(verticalLayout_6);

        robotcontrolClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(robotcontrolClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        robotcontrolClass->setStatusBar(statusbar);

        retranslateUi(robotcontrolClass);

        QMetaObject::connectSlotsByName(robotcontrolClass);
    } // setupUi

    void retranslateUi(QMainWindow *robotcontrolClass)
    {
        robotcontrolClass->setWindowTitle(QApplication::translate("robotcontrolClass", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("robotcontrolClass", "TCP Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = offsettable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("robotcontrolClass", "Output", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = offsettable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("robotcontrolClass", "Input", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = offsettable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("robotcontrolClass", "X", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = offsettable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("robotcontrolClass", "Y", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = offsettable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("robotcontrolClass", "Z", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = offsettable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("robotcontrolClass", "T", Q_NULLPTR));
        setoffset_btn->setText(QApplication::translate("robotcontrolClass", "Set Offset", Q_NULLPTR));
        loadfile->setText(QApplication::translate("robotcontrolClass", "Load File", Q_NULLPTR));
        axiscombox->clear();
        axiscombox->insertItems(0, QStringList()
         << QApplication::translate("robotcontrolClass", "Axis1", Q_NULLPTR)
         << QApplication::translate("robotcontrolClass", "Axis2", Q_NULLPTR)
         << QApplication::translate("robotcontrolClass", "Axis3", Q_NULLPTR)
         << QApplication::translate("robotcontrolClass", "Axis4", Q_NULLPTR)
         << QApplication::translate("robotcontrolClass", "Axis5", Q_NULLPTR)
         << QApplication::translate("robotcontrolClass", "Axis6", Q_NULLPTR)
        );
        jog_p_btn->setText(QApplication::translate("robotcontrolClass", "+", Q_NULLPTR));
        jog_n_btn->setText(QApplication::translate("robotcontrolClass", "-", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("robotcontrolClass", "Joint Position", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = jointtable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("robotcontrolClass", "Output", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = jointtable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("robotcontrolClass", "Input", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = jointtable->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("robotcontrolClass", "Axis1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = jointtable->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("robotcontrolClass", "Axis2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = jointtable->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("robotcontrolClass", "Axis3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = jointtable->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("robotcontrolClass", "Axis4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = jointtable->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("robotcontrolClass", "Axis5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = jointtable->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("robotcontrolClass", "Axis6", Q_NULLPTR));
        label_25->setText(QApplication::translate("robotcontrolClass", "V:", Q_NULLPTR));
        doubleSpinBox_33->setSuffix(QApplication::translate("robotcontrolClass", "%", Q_NULLPTR));
        gridGroupBox->setTitle(QApplication::translate("robotcontrolClass", "TCP and TOV", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tcptable->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("robotcontrolClass", "Output", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tcptable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("robotcontrolClass", "Input", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tcptable->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("robotcontrolClass", "X", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tcptable->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("robotcontrolClass", "Y", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tcptable->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("robotcontrolClass", "Z", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tcptable->verticalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("robotcontrolClass", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tcptable->verticalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("robotcontrolClass", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tcptable->verticalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("robotcontrolClass", "C", Q_NULLPTR));
        radioButton->setText(QApplication::translate("robotcontrolClass", "Input", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("robotcontrolClass", "Forward", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("robotcontrolClass", "Down", Q_NULLPTR));
        start_btn->setText(QApplication::translate("robotcontrolClass", "Start", Q_NULLPTR));
        stop_btn->setText(QApplication::translate("robotcontrolClass", "Stop", Q_NULLPTR));
        servo_on_btn->setText(QApplication::translate("robotcontrolClass", "Servo ON", Q_NULLPTR));
        servo_off_btn->setText(QApplication::translate("robotcontrolClass", "Servo OFF", Q_NULLPTR));
        exit_btn->setText(QApplication::translate("robotcontrolClass", "Exit", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("robotcontrolClass", "Gripper Control", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("robotcontrolClass", "Open", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("robotcontrolClass", "Close", Q_NULLPTR));
        label_21->setText(QApplication::translate("robotcontrolClass", "P:", Q_NULLPTR));
        doubleSpinBox_30->setSuffix(QApplication::translate("robotcontrolClass", "mm", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("robotcontrolClass", "Move", Q_NULLPTR));
        label_22->setText(QApplication::translate("robotcontrolClass", "V:", Q_NULLPTR));
        doubleSpinBox_29->setSuffix(QApplication::translate("robotcontrolClass", "%", Q_NULLPTR));
        label_23->setText(QApplication::translate("robotcontrolClass", "F:", Q_NULLPTR));
        doubleSpinBox_31->setSuffix(QApplication::translate("robotcontrolClass", "%", Q_NULLPTR));
        label_24->setText(QApplication::translate("robotcontrolClass", "Delay", Q_NULLPTR));
        doubleSpinBox_32->setSuffix(QApplication::translate("robotcontrolClass", "sec", Q_NULLPTR));
        move_btn->setText(QApplication::translate("robotcontrolClass", "Move", Q_NULLPTR));
        joint_ctr_btn->setText(QApplication::translate("robotcontrolClass", "Joint Control", Q_NULLPTR));
        p2p_ctr_btn->setText(QApplication::translate("robotcontrolClass", "P2P Control", Q_NULLPTR));
        cp_ctr_btn->setText(QApplication::translate("robotcontrolClass", "CP Control", Q_NULLPTR));
        enter_btn->setText(QApplication::translate("robotcontrolClass", "Enter", Q_NULLPTR));
        mode_btn->setText(QApplication::translate("robotcontrolClass", "Change Mode", Q_NULLPTR));
        readtxt_btn->setText(QApplication::translate("robotcontrolClass", "Read TXT", Q_NULLPTR));
        paint_btn->setText(QApplication::translate("robotcontrolClass", "Paint Taiwan", Q_NULLPTR));
        home_btn->setText(QApplication::translate("robotcontrolClass", "Home", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class robotcontrolClass: public Ui_robotcontrolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCONTROL_H
