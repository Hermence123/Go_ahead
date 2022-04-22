/*
** EPITECH PROJECT, 2022
** Manage_first_line
** File description:
** To get_fist_line_informations
*/

#include "../includes/tetris_lib.h"

void ini_line1(minos **f)
{
    (*f)->line14 = get_line1((*f)->tminos4);
    (*f)->line15 = get_line1((*f)->tminos5);
    (*f)->line16 = get_line1((*f)->tminos6);
    (*f)->line17 = get_line1((*f)->tminos7);
    (*f)->line1b = get_line1((*f)->tminosb);
    (*f)->line1l = get_line1((*f)->tminosl);
    (*f)->line1q = get_line1((*f)->tminosq);
}

void ini_coe(minos **f)
{
    (*f)->coe4 = get_coe((*f)->line14);
    (*f)->coe5 = get_coe((*f)->line15);
    (*f)->coe6 = get_coe((*f)->line16);
    (*f)->coe7 = get_coe((*f)->line17);
    (*f)->coeb = get_coe((*f)->line1b);
    (*f)->coel = get_coe((*f)->line1l);
    (*f)->coeq = get_coe((*f)->line1q);
}
