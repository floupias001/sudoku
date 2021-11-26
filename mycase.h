#ifndef MYCASE_H
#define MYCASE_H


#define FALSE -1
#define NA 0
#define OK 1
#define FIX 2

class mycase
{
public:
    mycase(int ligne_, int colonne_, int bloc_);
    ~mycase();
    int valeur;
    int ligne;
    int colonne;
    int bloc;
    int is_valid;
};

#endif // MYCASE_H
