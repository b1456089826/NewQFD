#include "step7.h"
#include "ui_step7.h"

Step7::Step7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step7)
{
    ui->setupUi(this);
}

Step7::~Step7()
{
    delete ui;
}
