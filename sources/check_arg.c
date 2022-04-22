/*
** EPITECH PROJECT, 2022
** Check_arg
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int check_arg(char **av)
{
    int x = 0, y = 0;
    int good = 1, bad = 0;
    int check = 0;

    for (x = 1; av[x] != NULL; x++) {
        for (y = 0; av[x][y] != '\0'; y++) {
            if (av[x][y] < '0' || av[x][y] > '9')
                check = bad;
            else
                check = good;
        }
    }
    return (check);
}
