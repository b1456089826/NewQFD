#include "step9.h"
#include "ui_step9.h"

Step9::Step9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step9)
{
    ui->setupUi(this);
}

Step9::~Step9()
{
    delete ui;
}
