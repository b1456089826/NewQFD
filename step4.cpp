#include "step4.h"
#include "ui_step4.h"

Step4::Step4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step4)
{
    ui->setupUi(this);
}

Step4::~Step4()
{
    delete ui;
}
