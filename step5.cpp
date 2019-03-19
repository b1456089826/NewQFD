#include "step5.h"
#include "ui_step5.h"

Step5::Step5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step5)
{
    ui->setupUi(this);
}

Step5::~Step5()
{
    delete ui;
}
