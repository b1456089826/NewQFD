#include "step4.h"
#include "ui_step4.h"

Step4::Step4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Step4)
{
    ui->setupUi(this);
}
void Step4::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::TextAntialiasing, true) ;
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setPen(QPen(Qt::black,2,Qt::SolidLine));
    int left=5;
    int up=5;
    int width=200;
    painter.drawRect(left,95,350,84);
    painter.drawRect(left+75,50,200,214);
    painter.drawLine(QPoint(left+75,224),QPoint(left+75+width,224));
    painter.drawLine(QPoint(left+75,up+45),QPoint(left+75+width/2,up));
    painter.drawLine(QPoint(left+75+width/2,up),QPoint(left+75+width,up+45));
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
    painter.drawText(310,166,"度4");
}
Step4::~Step4()
{
    delete ui;
}
