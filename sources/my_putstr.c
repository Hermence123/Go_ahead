/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** No file description
*/

#include "../includes/sokoban_lib.h"

int my_putstr(char *str)
{
    int x = 0;

    for (x = 0; str[x] != '\0'; x++) {
        my_putchar(str[x]);
    }
    return (0);
}
