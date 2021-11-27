#include "mycase.h"

mycase::mycase(mylabel* label_, myspinbox* spinbox_) : QWidget()
{
    valeur = 0;
    is_valid = 0;
    label = label_;
    spinbox = spinbox_;
    QObject::connect(spinbox, SIGNAL(valueChanged(int)), this, SLOT(changevalue(int)));
}

void mycase::changevalue(int nb){
    valeur = nb;
    label->setNum(nb);
}

void mycase::refreshlabel(){
    label->setNum(valeur);
}

mycase::~mycase(){

}
