/*
** EPITECH PROJECT, 2022
** Get_coefficients
** File description:
** to get first_line coefficients
*/

#include "../includes/tetris_lib.h"

int *get_coe(char *first_line)
{
    int i = 0;

    int *stock_coes = malloc(sizeof(int ) * 4);
    for (int x = 0; first_line[x] != '\n'; x++) {
        if (first_line[x] != ' ') {
            stock_coes[i] =  atoi(first_line + x);
            i++;
        }
    }
    return (stock_coes);
}

void show_coes(int *stock_coes)
{
    int x = 0;
    for (x = 0; x < 3; x++)
        printf("%d\n", stock_coes[x]);
}
