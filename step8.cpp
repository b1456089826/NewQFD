#include "step8.h"
#include "ui_step8.h"

Step8::Step8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step8)
{
    ui->setupUi(this);
}

Step8::~Step8()
{
    delete ui;
}
