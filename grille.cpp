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
    //std::cout << KBLU << "TEST LIGNE OK" << KNRM << std::endl ;
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
    //std::cout << KBLU << "TEST COLONNE OK" << KNRM << std::endl ;
    return 1;
}

int grille::test_bloc(int nb){
    int valeur = (liste[nb])->valeur;
    int i = nb/9; // n de ligne (commence à 0)
    int j = nb%9; // n de colonne
    int i2 = 0; //n de ligne en haut a gauche du bloc
    int j2 = 0; // idem colonne
    switch (i){
        case 3:
        case 4:
        case 5:
            i2 = 3;
        break;
        case 6 :
        case 7:
        case 8:
            i2 = 6;
        break;
    default :
        i2 = 0;
    }
    switch (j){
        case 3:
        case 4:
        case 5:
            j2 = 3;
        break;
        case 6 :
        case 7:
        case 8:
            j2 = 6;
        break;
    default :
        j2 = 0;
    }

    int k = 0;
    for (int o=0; o<3; o++){
        for (int oo = 0; oo < 3; oo++){
            k = o + j2 +9*oo + 9*i2;
            //std::cout << KBLU << "TEST BLOC ?" << KNRM << std::endl ;
            //std::cout  << (liste[k])->valeur << "  pour k=" <<  k << "et valeur " << valeur << std::endl ;
            if ((liste[k])->valeur == valeur && (nb!=k)) return 0;
        }
    }
    //std::cout << KBLU << "TEST BLOC OK" << KNRM << std::endl ;
    return 1;
}


grille::grille(QWidget* fenetre_)
{ 

    fenetre = fenetre_;

    box11 = new myspinbox(fenetre);
    box12 = new myspinbox(fenetre);
    box13 = new myspinbox(fenetre);
    box14 = new myspinbox(fenetre);
    box15 = new myspinbox(fenetre);
    box16 = new myspinbox(fenetre);
    box17 = new myspinbox(fenetre);
    box18 = new myspinbox(fenetre);
    box19 = new myspinbox(fenetre);
    label11 = new mylabel(fenetre);
    label12 = new mylabel(fenetre);
    label13 = new mylabel(fenetre);
    label14 = new mylabel(fenetre);
    label15 = new mylabel(fenetre);
    label16 = new mylabel(fenetre);
    label17 = new mylabel(fenetre);
    label18 = new mylabel(fenetre);
    label19 = new mylabel(fenetre);

    box21 = new myspinbox(fenetre);
    box22 = new myspinbox(fenetre);
    box23 = new myspinbox(fenetre);
    box24 = new myspinbox(fenetre);
    box25 = new myspinbox(fenetre);
    box26 = new myspinbox(fenetre);
    box27 = new myspinbox(fenetre);
    box28 = new myspinbox(fenetre);
    box29 = new myspinbox(fenetre);
    label21 = new mylabel(fenetre);
    label22 = new mylabel(fenetre);
    label23 = new mylabel(fenetre);
    label24 = new mylabel(fenetre);
    label25 = new mylabel(fenetre);
    label26 = new mylabel(fenetre);
    label27 = new mylabel(fenetre);
    label28 = new mylabel(fenetre);
    label29 = new mylabel(fenetre);

    box31 = new myspinbox(fenetre);
    box32 = new myspinbox(fenetre);
    box33 = new myspinbox(fenetre);
    box34 = new myspinbox(fenetre);
    box35 = new myspinbox(fenetre);
    box36 = new myspinbox(fenetre);
    box37 = new myspinbox(fenetre);
    box38 = new myspinbox(fenetre);
    box39 = new myspinbox(fenetre);
    label31 = new mylabel(fenetre);
    label32 = new mylabel(fenetre);
    label33 = new mylabel(fenetre);
    label34 = new mylabel(fenetre);
    label35 = new mylabel(fenetre);
    label36 = new mylabel(fenetre);
    label37 = new mylabel(fenetre);
    label38 = new mylabel(fenetre);
    label39 = new mylabel(fenetre);

    box41 = new myspinbox(fenetre);
    box42 = new myspinbox(fenetre);
    box43 = new myspinbox(fenetre);
    box44 = new myspinbox(fenetre);
    box45 = new myspinbox(fenetre);
    box46 = new myspinbox(fenetre);
    box47 = new myspinbox(fenetre);
    box48 = new myspinbox(fenetre);
    box49 = new myspinbox(fenetre);
    label41 = new mylabel(fenetre);
    label42 = new mylabel(fenetre);
    label43 = new mylabel(fenetre);
    label44 = new mylabel(fenetre);
    label45 = new mylabel(fenetre);
    label46 = new mylabel(fenetre);
    label47 = new mylabel(fenetre);
    label48 = new mylabel(fenetre);
    label49 = new mylabel(fenetre);

    box51 = new myspinbox(fenetre);
    box52 = new myspinbox(fenetre);
    box53 = new myspinbox(fenetre);
    box54 = new myspinbox(fenetre);
    box55 = new myspinbox(fenetre);
    box56 = new myspinbox(fenetre);
    box57 = new myspinbox(fenetre);
    box58 = new myspinbox(fenetre);
    box59 = new myspinbox(fenetre);
    label51 = new mylabel(fenetre);
    label52 = new mylabel(fenetre);
    label53 = new mylabel(fenetre);
    label54 = new mylabel(fenetre);
    label55 = new mylabel(fenetre);
    label56 = new mylabel(fenetre);
    label57 = new mylabel(fenetre);
    label58 = new mylabel(fenetre);
    label59 = new mylabel(fenetre);

    box61 = new myspinbox(fenetre);
    box62 = new myspinbox(fenetre);
    box63 = new myspinbox(fenetre);
    box64 = new myspinbox(fenetre);
    box65 = new myspinbox(fenetre);
    box66 = new myspinbox(fenetre);
    box67 = new myspinbox(fenetre);
    box68 = new myspinbox(fenetre);
    box69 = new myspinbox(fenetre);
    label61 = new mylabel(fenetre);
    label62 = new mylabel(fenetre);
    label63 = new mylabel(fenetre);
    label64 = new mylabel(fenetre);
    label65 = new mylabel(fenetre);
    label66 = new mylabel(fenetre);
    label67 = new mylabel(fenetre);
    label68 = new mylabel(fenetre);
    label69 = new mylabel(fenetre);

    box71 = new myspinbox(fenetre);
    box72 = new myspinbox(fenetre);
    box73 = new myspinbox(fenetre);
    box74 = new myspinbox(fenetre);
    box75 = new myspinbox(fenetre);
    box76 = new myspinbox(fenetre);
    box77 = new myspinbox(fenetre);
    box78 = new myspinbox(fenetre);
    box79 = new myspinbox(fenetre);
    label71 = new mylabel(fenetre);
    label72 = new mylabel(fenetre);
    label73 = new mylabel(fenetre);
    label74 = new mylabel(fenetre);
    label75 = new mylabel(fenetre);
    label76 = new mylabel(fenetre);
    label77 = new mylabel(fenetre);
    label78 = new mylabel(fenetre);
    label79 = new mylabel(fenetre);

    box81 = new myspinbox(fenetre);
    box82 = new myspinbox(fenetre);
    box83 = new myspinbox(fenetre);
    box84 = new myspinbox(fenetre);
    box85 = new myspinbox(fenetre);
    box86 = new myspinbox(fenetre);
    box87 = new myspinbox(fenetre);
    box88 = new myspinbox(fenetre);
    box89 = new myspinbox(fenetre);
    label81 = new mylabel(fenetre);
    label82 = new mylabel(fenetre);
    label83 = new mylabel(fenetre);
    label84 = new mylabel(fenetre);
    label85 = new mylabel(fenetre);
    label86 = new mylabel(fenetre);
    label87 = new mylabel(fenetre);
    label88 = new mylabel(fenetre);
    label89 = new mylabel(fenetre);

    box91 = new myspinbox(fenetre);
    box92 = new myspinbox(fenetre);
    box93 = new myspinbox(fenetre);
    box94 = new myspinbox(fenetre);
    box95 = new myspinbox(fenetre);
    box96 = new myspinbox(fenetre);
    box97 = new myspinbox(fenetre);
    box98 = new myspinbox(fenetre);
    box99 = new myspinbox(fenetre);
    label91 = new mylabel(fenetre);
    label92 = new mylabel(fenetre);
    label93 = new mylabel(fenetre);
    label94 = new mylabel(fenetre);
    label95 = new mylabel(fenetre);
    label96 = new mylabel(fenetre);
    label97 = new mylabel(fenetre);
    label98 = new mylabel(fenetre);
    label99 = new mylabel(fenetre);

    //Bloc 1
    case11 = new mycase(label11, box11);
    case12 = new mycase(label12, box12);
    case13 = new mycase(label13, box13);
    case21 = new mycase(label21, box21);
    case22 = new mycase(label22, box22);
    case23 = new mycase(label23, box23);
    case31 = new mycase(label31, box31);
    case32 = new mycase(label32, box32);
    case33 = new mycase(label33, box33);
    //Bloc 2
    case14 = new mycase(label14, box14);
    case15 = new mycase(label15, box15);
    case16 = new mycase(label16, box16);
    case24 = new mycase(label24, box24);
    case25 = new mycase(label25, box25);
    case26 = new mycase(label26, box26);
    case34 = new mycase(label34, box34);
    case35 = new mycase(label35, box35);
    case36 = new mycase(label36, box36);
    //Bloc 3
    case17 = new mycase(label17, box17);
    case18 = new mycase(label18, box18);
    case19 = new mycase(label19, box19);
    case27 = new mycase(label27, box27);
    case28 = new mycase(label28, box28);
    case29 = new mycase(label29, box29);
    case37 = new mycase(label37, box37);
    case38 = new mycase(label38, box38);
    case39 = new mycase(label39, box39);
    //Bloc 4
    case41 = new mycase(label41, box41);
    case42 = new mycase(label42, box42);
    case43 = new mycase(label43, box43);
    case51 = new mycase(label51, box51);
    case52 = new mycase(label52, box52);
    case53 = new mycase(label53, box53);
    case61 = new mycase(label61, box61);
    case62 = new mycase(label62, box62);
    case63 = new mycase(label63, box63);
    //Bloc 5
    case44 = new mycase(label44, box44);
    case45 = new mycase(label45, box45);
    case46 = new mycase(label46, box46);
    case54 = new mycase(label54, box54);
    case55 = new mycase(label55, box55);
    case56 = new mycase(label56, box56);
    case64 = new mycase(label64, box64);
    case65 = new mycase(label65, box65);
    case66 = new mycase(label66, box66);
    //Bloc 6
    case47 = new mycase(label47, box47);
    case48 = new mycase(label48, box48);
    case49 = new mycase(label49, box49);
    case57 = new mycase(label57, box57);
    case58 = new mycase(label58, box58);
    case59 = new mycase(label59, box59);
    case67 = new mycase(label67, box67);
    case68 = new mycase(label68, box68);
    case69 = new mycase(label69, box69);
    //Bloc 7
    case71 = new mycase(label71, box71);
    case72 = new mycase(label72, box72);
    case73 = new mycase(label73, box73);
    case81 = new mycase(label81, box81);
    case82 = new mycase(label82, box82);
    case83 = new mycase(label83, box83);
    case91 = new mycase(label91, box91);
    case92 = new mycase(label92, box92);
    case93 = new mycase(label93, box93);
    //Bloc 8
    case74 = new mycase(label74, box74);
    case75 = new mycase(label75, box75);
    case76 = new mycase(label76, box76);
    case84 = new mycase(label84, box84);
    case85 = new mycase(label85, box85);
    case86 = new mycase(label86, box86);
    case94 = new mycase(label94, box94);
    case95 = new mycase(label95, box95);
    case96 = new mycase(label96, box96);
    //Bloc 9
    case77 = new mycase(label77, box77);
    case78 = new mycase(label78, box78);
    case79 = new mycase(label79, box79);
    case87 = new mycase(label87, box87);
    case88 = new mycase(label88, box88);
    case89 = new mycase(label89, box89);
    case97 = new mycase(label97, box97);
    case98 = new mycase(label98, box98);
    case99 = new mycase(label99, box99);

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

    delete(box11);
    delete(box12);
    delete(box13);
    delete(box14);
    delete(box15);
    delete(box16);
    delete(box17);
    delete(box18);
    delete(box19);
    delete(box21);
    delete(box22);
    delete(box23);
    delete(box24);
    delete(box25);
    delete(box26);
    delete(box27);
    delete(box28);
    delete(box29);
    delete(box31);
    delete(box32);
    delete(box33);
    delete(box34);
    delete(box35);
    delete(box36);
    delete(box37);
    delete(box38);
    delete(box39);
    delete(box41);
    delete(box42);
    delete(box43);
    delete(box44);
    delete(box45);
    delete(box46);
    delete(box47);
    delete(box48);
    delete(box49);
    delete(box51);
    delete(box52);
    delete(box53);
    delete(box54);
    delete(box55);
    delete(box56);
    delete(box57);
    delete(box58);
    delete(box59);
    delete(box61);
    delete(box62);
    delete(box63);
    delete(box64);
    delete(box65);
    delete(box66);
    delete(box67);
    delete(box68);
    delete(box69);
    delete(box71);
    delete(box72);
    delete(box73);
    delete(box74);
    delete(box75);
    delete(box76);
    delete(box77);
    delete(box78);
    delete(box79);
    delete(box81);
    delete(box82);
    delete(box83);
    delete(box84);
    delete(box85);
    delete(box86);
    delete(box87);
    delete(box88);
    delete(box89);
    delete(box91);
    delete(box92);
    delete(box93);
    delete(box94);
    delete(box95);
    delete(box96);
    delete(box97);
    delete(box98);
    delete(box99);

    delete(label11);
    delete(label12);
    delete(label13);
    delete(label14);
    delete(label15);
    delete(label16);
    delete(label17);
    delete(label18);
    delete(label19);
    delete(label21);
    delete(label22);
    delete(label23);
    delete(label24);
    delete(label25);
    delete(label26);
    delete(label27);
    delete(label28);
    delete(label29);
    delete(label31);
    delete(label32);
    delete(label33);
    delete(label34);
    delete(label35);
    delete(label36);
    delete(label37);
    delete(label38);
    delete(label39);
    delete(label41);
    delete(label42);
    delete(label43);
    delete(label44);
    delete(label45);
    delete(label46);
    delete(label47);
    delete(label48);
    delete(label49);
    delete(label51);
    delete(label52);
    delete(label53);
    delete(label54);
    delete(label55);
    delete(label56);
    delete(label57);
    delete(label58);
    delete(label59);
    delete(label61);
    delete(label62);
    delete(label63);
    delete(label64);
    delete(label65);
    delete(label66);
    delete(label67);
    delete(label68);
    delete(label69);
    delete(label71);
    delete(label72);
    delete(label73);
    delete(label74);
    delete(label75);
    delete(label76);
    delete(label77);
    delete(label78);
    delete(label79);
    delete(label81);
    delete(label82);
    delete(label83);
    delete(label84);
    delete(label85);
    delete(label86);
    delete(label87);
    delete(label88);
    delete(label89);
    delete(label91);
    delete(label92);
    delete(label93);
    delete(label94);
    delete(label95);
    delete(label96);
    delete(label97);
    delete(label98);
    delete(label99);
}
