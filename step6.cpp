#include "step6.h"
#include "ui_step6.h"

Step6::Step6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step6)
{
    ui->setupUi(this);
}

Step6::~Step6()
{
    delete ui;
}
