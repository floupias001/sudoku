#ifndef MYCASE_H
#define MYCASE_H

#include "myspinbox.h"
#include "mylabel.h"
#include <QWidget>


#define FALSE -1
#define NA 0
#define OK 1
#define FIX 2

class mycase : public QWidget
{
    Q_OBJECT

public:
    mycase( mylabel* label_, myspinbox* spinbox_);
    ~mycase();
    int valeur;
    int is_valid;

    mylabel* label;
    myspinbox* spinbox;

    void refreshlabel();

public slots :
    void changevalue(int nb);
};

#endif // MYCASE_H
