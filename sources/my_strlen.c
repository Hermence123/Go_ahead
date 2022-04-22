/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** find string length
*/

#include "../includes/tetris_lib.h"

int my_strlen(char *str)
{
    int x = 0;
    for (x = 0; str[x] != 0; x++);
    return (x);
}
