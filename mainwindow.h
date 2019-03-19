#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QVBoxLayout>
#include"qnavigationwidget.h"
#include<step1.h>
#include<step2.h>
#include<step3.h>
#include<step4.h>
#include<step5.h>
#include<step6.h>
#include<step7.h>
#include<step8.h>
#include<step9.h>
#include<step10.h>
#include<QLabel>
#include<QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget *mainWidget;
    QWidget *rightWidget;
    QHBoxLayout *mainLayout;
    QVBoxLayout *rightLayout;
    QNavigationWidget *navigationWidget;
    QLabel *tipsLabel;
    Step1 *Step1_Page;
    Step2 *Step2_Page;
    Step3 *Step3_Page;
    Step4 *Step4_Page;
    Step5 *Step5_Page;
    Step6 *Step6_Page;
    Step7 *Step7_Page;
    Step8 *Step8_Page;
    Step9 *Step9_Page;
    Step10 *Step10_Page;
};

#endif // MAINWINDOW_H
