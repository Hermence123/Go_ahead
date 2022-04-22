/*
** EPITECH PROJECT, 2022
** No case
** File description:
** for case miss
*/

#include "../includes/tetris_lib.h"

char *no_case(int x)
{
    int y = 0;
    char *str = malloc(sizeof(char) * 10);
    for (y = 0; y < 1; y++)
        str[y] = x;
    str[y] = '\0';
    return (str);
}
