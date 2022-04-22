/*
** EPITECH PROJECT, 2022
** Show-second-PART
** File description:
** DEBUG SECOND PART
*/

#include "../includes/tetris_lib.h"

void ini_minos(minos **f)
{
    (*f)->minos4 = load_files("./Tetriminos/4.tetrimino");
    (*f)->minos5 = load_files("./Tetriminos/5.tetrimino");
    (*f)->minos6 = load_files("./Tetriminos/6.tetrimino");
    (*f)->minos7 = load_files("./Tetriminos/7.tetrimino");
    (*f)->minosb = load_files("./Tetriminos/bar.tetrimino");
    (*f)->minosl = load_files("./Tetriminos/inverted-L.tetrimino");
    (*f)->minosq = load_files("./Tetriminos/square.tetrimino");
}

void size_minos(minos **f)
{
    (*f)->sz1 = file_size("./Tetriminos/4.tetrimino");
    (*f)->sz2 = file_size("./Tetriminos/5.tetrimino");
    (*f)->sz3 = file_size("./Tetriminos/6.tetrimino");
    (*f)->sz4 = file_size("./Tetriminos/7.tetrimino");
    (*f)->sz5 = file_size("./Tetriminos/bar.tetrimino");
    (*f)->sz6 = file_size("./Tetriminos/inverted-L.tetrimino");
    (*f)->sz7 = file_size("./Tetriminos/square.tetrimino");
}

void tab_minos(minos **f)
{
    (*f)->tminos4 = arr2((*f)->minos4, (*f)->sz1);
    (*f)->tminos5 = arr2((*f)->minos5, (*f)->sz2);
    (*f)->tminos6 = arr2((*f)->minos6, (*f)->sz3);
    (*f)->tminos7 = arr2((*f)->minos7, (*f)->sz4);
    (*f)->tminosb = arr2((*f)->minosb, (*f)->sz5);
    (*f)->tminosl = arr2((*f)->minosl, (*f)->sz6);
    (*f)->tminosq = arr2((*f)->minosq, (*f)->sz7);
}

void before_part2_debug(minos *f)
{
    ini_minos(&f);
    size_minos(&f);
    tab_minos(&f);
    ini_line1(&f);
    ini_coe(&f);
}
