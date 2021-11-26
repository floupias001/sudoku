#include "grille.h"

int grille::test(int nb){
    return test_ligne(nb)&&test_colonne(nb)&&test_bloc(nb);
}

int grille::test_ligne(int nb){
    int valeur = (liste[nb])->valeur;
    int i = nb/9; //debut de la ligne ie si nb = 13, i = 1 donc 2eme ligne (allant de 9*i à 9*i + 8)
    int k = 0;
    for (int o=0; o<9; o++) {
        k = i*9 + o;
        if ((liste[k])->valeur == valeur && (nb != k)) return 0;
    }
    return 1;
}

int grille::test_colonne(int nb){
    int valeur = (liste[nb])->valeur;
    int i = nb%9; //debut de la colonne ie si nb = 13, i = 4 donc 5eme colonne (etant 4, 4+9, 4+2*9, ... , 4+8*9)
    int k = 0;
    for (int o=0; o<9; o++) {
        k = i + 9*o;
        if ((liste[k])->valeur == valeur && (nb != k)) return 0;
    }
    return 1;
}

int grille::test_bloc(int nb){
    int valeur = (liste[nb])->valeur;
    int i = nb/9 + 1; // n de ligne
    int j = nb%9 + 1; // n de colonne
    int i2 = 0; //n de ligne en haut a gauche du bloc
    int j2 = 0; // idem colonne
    switch (i){
        case 4:
        case 5:
        case 6:
            i2 = 4;
        break;
        case 7 :
        case 8:
        case 9:
            i2 = 7;
        break;
    default :
        i2 = 1;
    }
    switch (j){
        case 4:
        case 5:
        case 6:
            j2 = 4;
        break;
        case 7 :
        case 8:
        case 9:
            j2 = 7;
        break;
    default :
        j2 = 1;
    }

    int k = 0;
    for (int o=0; o<3; o++){
        for (int oo = 0; oo < 3; oo++){
            k = o + i2 +9*oo + 9*j2;
            if ((liste[k])->valeur == valeur && (nb!=k)) return 0;
        }
    }

    return 1;
}


grille::grille()
{ 

    int i = 0;
    int j = 0;
    int b= 1;
    //Bloc 1
    case11 = new mycase(1+i, 1+j, b);
    case12 = new mycase(1+i, 2+j, b);
    case13 = new mycase(1+i, 3+j, b);
    case21 = new mycase(2+i, 1+j, b);
    case22 = new mycase(2+i, 2+j, b);
    case23 = new mycase(2+i, 3+j, b);
    case31 = new mycase(3+i, 1+j, b);
    case32 = new mycase(3+i, 2+j, b);
    case33 = new mycase(3+i, 3+j, b);
    //Bloc 2
    i = 0;
    j = 3;
    b = 2;
    case14 = new mycase(1+i, 1+j, b);
    case15 = new mycase(1+i, 2+j, b);
    case16 = new mycase(1+i, 3+j, b);
    case24 = new mycase(2+i, 1+j, b);
    case25 = new mycase(2+i, 2+j, b);
    case26 = new mycase(2+i, 3+j, b);
    case34 = new mycase(3+i, 1+j, b);
    case35 = new mycase(3+i, 2+j, b);
    case36 = new mycase(3+i, 3+j, b);
    //Bloc 3
    i = 0;
    j = 6;
    b = 3;
    case17 = new mycase(1+i, 1+j, b);
    case18 = new mycase(1+i, 2+j, b);
    case19 = new mycase(1+i, 3+j, b);
    case27 = new mycase(2+i, 1+j, b);
    case28 = new mycase(2+i, 2+j, b);
    case29 = new mycase(2+i, 3+j, b);
    case37 = new mycase(3+i, 1+j, b);
    case38 = new mycase(3+i, 2+j, b);
    case39 = new mycase(3+i, 3+j, b);
    //Bloc 4
    i = 3;
    j = 0;
    b = 4;
    case41 = new mycase(1+i, 1+j, b);
    case42 = new mycase(1+i, 2+j, b);
    case43 = new mycase(1+i, 3+j, b);
    case51 = new mycase(2+i, 1+j, b);
    case52 = new mycase(2+i, 2+j, b);
    case53 = new mycase(2+i, 3+j, b);
    case61 = new mycase(3+i, 1+j, b);
    case62 = new mycase(3+i, 2+j, b);
    case63 = new mycase(3+i, 3+j, b);
    //Bloc 5
    i = 3;
    j = 3;
    b = 5;
    case44 = new mycase(1+i, 1+j, b);
    case45 = new mycase(1+i, 2+j, b);
    case46 = new mycase(1+i, 3+j, b);
    case54 = new mycase(2+i, 1+j, b);
    case55 = new mycase(2+i, 2+j, b);
    case56 = new mycase(2+i, 3+j, b);
    case64 = new mycase(3+i, 1+j, b);
    case65 = new mycase(3+i, 2+j, b);
    case66 = new mycase(3+i, 3+j, b);
    //Bloc 6
    i = 3;
    j = 6;
    b = 6;
    case47 = new mycase(1+i, 1+j, b);
    case48 = new mycase(1+i, 2+j, b);
    case49 = new mycase(1+i, 3+j, b);
    case57 = new mycase(2+i, 1+j, b);
    case58 = new mycase(2+i, 2+j, b);
    case59 = new mycase(2+i, 3+j, b);
    case67 = new mycase(3+i, 1+j, b);
    case68 = new mycase(3+i, 2+j, b);
    case69 = new mycase(3+i, 3+j, b);
    //Bloc 7
    i = 6;
    j = 0;
    b = 7;
    case71 = new mycase(1+i, 1+j, b);
    case72 = new mycase(1+i, 2+j, b);
    case73 = new mycase(1+i, 3+j, b);
    case81 = new mycase(2+i, 1+j, b);
    case82 = new mycase(2+i, 2+j, b);
    case83 = new mycase(2+i, 3+j, b);
    case91 = new mycase(3+i, 1+j, b);
    case92 = new mycase(3+i, 2+j, b);
    case93 = new mycase(3+i, 3+j, b);
    //Bloc 8
    i = 6;
    j = 3;
    b = 8;
    case74 = new mycase(1+i, 1+j, b);
    case75 = new mycase(1+i, 2+j, b);
    case76 = new mycase(1+i, 3+j, b);
    case84 = new mycase(2+i, 1+j, b);
    case85 = new mycase(2+i, 2+j, b);
    case86 = new mycase(2+i, 3+j, b);
    case94 = new mycase(3+i, 1+j, b);
    case95 = new mycase(3+i, 2+j, b);
    case96 = new mycase(3+i, 3+j, b);
    //Bloc 9
    i = 6;
    j = 6;
    b = 9;
    case77 = new mycase(1+i, 1+j, b);
    case78 = new mycase(1+i, 2+j, b);
    case79 = new mycase(1+i, 3+j, b);
    case87 = new mycase(2+i, 1+j, b);
    case88 = new mycase(2+i, 2+j, b);
    case89 = new mycase(2+i, 3+j, b);
    case97 = new mycase(3+i, 1+j, b);
    case98 = new mycase(3+i, 2+j, b);
    case99 = new mycase(3+i, 3+j, b);

    liste[0] = case11;
    liste[1] = case12;
    liste[2] = case13;
    liste[3] = case14;
    liste[4] = case15;
    liste[5] = case16;
    liste[6] = case17;
    liste[7] = case18;
    liste[8] = case19;
    liste[9] = case21;
    liste[10] = case22;
    liste[11] = case23;
    liste[12] = case24;
    liste[13] = case25;
    liste[14] = case26;
    liste[15] = case27;
    liste[16] = case28;
    liste[17] = case29;
    liste[18] = case31;
    liste[19] = case32;
    liste[20] = case33;
    liste[21] = case34;
    liste[22] = case35;
    liste[23] = case36;
    liste[24] = case37;
    liste[25] = case38;
    liste[26] = case39;
    liste[27] = case41;
    liste[28] = case42;
    liste[29] = case43;
    liste[30] = case44;
    liste[31] = case45;
    liste[32] = case46;
    liste[33] = case47;
    liste[34] = case48;
    liste[35] = case49;
    liste[36] = case51;
    liste[37] = case52;
    liste[38] = case53;
    liste[39] = case54;
    liste[40] = case55;
    liste[41] = case56;
    liste[42] = case57;
    liste[43] = case58;
    liste[44] = case59;
    liste[45] = case61;
    liste[46] = case62;
    liste[47] = case63;
    liste[48] = case64;
    liste[49] = case65;
    liste[50] = case66;
    liste[51] = case67;
    liste[52] = case68;
    liste[53] = case69;
    liste[54] = case71;
    liste[55] = case72;
    liste[56] = case73;
    liste[57] = case74;
    liste[58] = case75;
    liste[59] = case76;
    liste[60] = case77;
    liste[61] = case78;
    liste[62] = case79;
    liste[63] = case81;
    liste[64] = case82;
    liste[65] = case83;
    liste[66] = case84;
    liste[67] = case85;
    liste[68] = case86;
    liste[69] = case87;
    liste[70] = case88;
    liste[71] = case89;
    liste[72] = case91;
    liste[73] = case92;
    liste[74] = case93;
    liste[75] = case94;
    liste[76] = case95;
    liste[77] = case96;
    liste[78] = case97;
    liste[79] = case98;
    liste[80] = case99;


}

grille::~grille(){
    delete(case11);
    delete(case12);
    delete(case13);
    delete(case14);
    delete(case15);
    delete(case16);
    delete(case17);
    delete(case18);
    delete(case19);
    delete(case21);
    delete(case22);
    delete(case23);
    delete(case24);
    delete(case25);
    delete(case26);
    delete(case27);
    delete(case28);
    delete(case29);
    delete(case31);
    delete(case32);
    delete(case33);
    delete(case34);
    delete(case35);
    delete(case36);
    delete(case37);
    delete(case38);
    delete(case39);
    delete(case41);
    delete(case42);
    delete(case43);
    delete(case44);
    delete(case45);
    delete(case46);
    delete(case47);
    delete(case48);
    delete(case49);
    delete(case51);
    delete(case52);
    delete(case53);
    delete(case54);
    delete(case55);
    delete(case56);
    delete(case57);
    delete(case58);
    delete(case59);
    delete(case61);
    delete(case62);
    delete(case63);
    delete(case64);
    delete(case65);
    delete(case66);
    delete(case67);
    delete(case68);
    delete(case69);
    delete(case71);
    delete(case72);
    delete(case73);
    delete(case74);
    delete(case75);
    delete(case76);
    delete(case77);
    delete(case78);
    delete(case79);
    delete(case81);
    delete(case82);
    delete(case83);
    delete(case84);
    delete(case85);
    delete(case86);
    delete(case87);
    delete(case88);
    delete(case89);
    delete(case91);
    delete(case92);
    delete(case93);
    delete(case94);
    delete(case95);
    delete(case96);
    delete(case97);
    delete(case98);
    delete(case99);
}
