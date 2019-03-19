#ifndef STEP9_H
#define STEP9_H

#include <QWidget>

namespace Ui {
class Step9;
}

class Step9 : public QWidget
{
    Q_OBJECT

public:
    explicit Step9(QWidget *parent = nullptr);
    ~Step9();

private:
    Ui::Step9 *ui;
};

#endif // STEP9_H
