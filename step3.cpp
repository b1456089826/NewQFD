#include "step3.h"
#include "ui_step3.h"

Step3::Step3(QWidget *parent) : QWidget(parent),
    ui(new Ui::Step3)
{
    ui->setupUi(this);
}
void Step3::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::TextAntialiasing, true) ;
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(QPen(Qt::black,2,Qt::SolidLine));
    painter.drawRect(5,95,350,84);
    painter.drawRect(80,50,200,214);
    painter.drawLine(QPoint(80,224),QPoint(280,224));
    painter.drawLine(QPoint(80,50),QPoint(180,5));
    painter.drawLine(QPoint(180,5),QPoint(280,50));
    QFont font;
    font.setFamily("微软雅黑");
    font.setPointSize(14);
   // font.setBold(true);
    painter.setFont(font);
    painter.drawText(135,45,"自相关性");
    painter.drawText(120,80,"全局质量参数");
    painter.drawText(130,145,"相关性矩阵");
    painter.drawText(105,210,"质量参数的重要度");
    painter.drawText(95,251,"质量参数的配置方案");
    painter.drawText(290,126,"价值期");
    painter.drawText(290,146,"望重要");
    painter.drawText(310,166,"度");
}
Step3::~Step3()
{
    delete ui;
}
