/*
** EPITECH PROJECT, 2022
** In part2 debug
** File description:
** manage part2
*/

#include "../includes/tetris_lib.h"

void debug_part2_1(minos *f)
{
    printf("\n");
    printf("Tetriminos '4': ");
    if (f->coe4[0] == 0 && f->coe4[1] == 0 && f->coe4[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coe4[0], f->coe4[1], f->coe4[2]);
    special_show(f->tminos4);
    printf("Tetriminos '5': ");
    if (f->coe5[0] == 0 && f->coe5[1] == 0 && f->coe5[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coe5[0], f->coe5[1], f->coe5[2]);
    special_show(f->tminos5);
    printf("Tetriminos '6': ");
    if (f->coe6[0] == 0 && f->coe6[1] == 0 && f->coe6[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coe6[0], f->coe6[1], f->coe6[2]);
    special_show(f->tminos6);
}

void debug_part2_2(minos *f)
{
    printf("Tetriminos '7': ");
    if (f->coe7[0] == 0 && f->coe7[1] == 0 && f->coe7[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coe7[0], f->coe7[1], f->coe7[2]);
    special_show(f->tminos7);
    printf("Tetriminos 'bar': ");
    if (f->coeb[0] == 0 && f->coeb[1] == 0 && f->coeb[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coeb[0], f->coeb[1], f->coeb[2]);
    special_show(f->tminosb);
}

void debug_part2_3(minos *f)
{
    printf("Tetriminos 'inverted-L': ");
    if (f->coel[0] == 0 && f->coel[1] == 0 && f->coel[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coel[0], f->coel[1], f->coel[2]);
    special_show(f->tminosl);
    printf("Tetriminos 'square': ");
    if (f->coeq[0] == 0 && f->coeq[1] == 0 && f->coeq[2] == 0)
        printf("error\n");
    else
        printf("size %d*%d, color %d\n", f->coeq[0], f->coeq[1], f->coeq[2]);
    special_show(f->tminosq);
}

void show_part2_debug(minos *f)
{
    before_part2_debug(f);
    printf("Number of tetriminos: %d\n", 7);
    debug_part2_1(f);
    debug_part2_2(f);
    debug_part2_3(f);
}
