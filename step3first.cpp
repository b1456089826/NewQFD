#include "step3first.h"
#include "ui_step3first.h"

Step3First::Step3First(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step3First)
{
    ui->setupUi(this);
}

Step3First::~Step3First()
{
    delete ui;
}
