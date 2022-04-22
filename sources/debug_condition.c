/*
** EPITECH PROJECT, 2022
** Debug_condition
** File description:
** To make condition to show debug_mode
*/

#include "../includes/tetris_lib.h"

int debug_condition(int ac, char **av)
{
    int x = 0;
    int y = 0;
    int check = 0;
    for (x = 0; av[x] != NULL; x++) {
        for (y = 0; av[x][y] != '\0'; y++) {
            if (av[x][y] == 'D')
                check = 1;
        }
    }
    return (check);
}
