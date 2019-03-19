#ifndef STEP3FIRST_H
#define STEP3FIRST_H

#include <QWidget>

namespace Ui {
class Step3First;
}

class Step3First : public QWidget
{
    Q_OBJECT

public:
    explicit Step3First(QWidget *parent = nullptr);
    ~Step3First();

private:
    Ui::Step3First *ui;
};

#endif // STEP3FIRST_H
