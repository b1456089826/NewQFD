#ifndef STEP9_H
#define STEP9_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step9;
}

class Step9 : public QWidget
{
    Q_OBJECT

public:
    explicit Step9(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step9();

private:
    Ui::Step9 *ui;
};

#endif // STEP9_H
