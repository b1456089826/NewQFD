#ifndef STEP10_H
#define STEP10_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step10;
}

class Step10 : public QWidget
{
    Q_OBJECT

public:
    explicit Step10(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step10();

private:
    Ui::Step10 *ui;
};

#endif // STEP10_H
