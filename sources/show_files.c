/*
** EPITECH PROJECT, 2022
** show_files
** File description:
** To show files containts
*/

#include "../includes/tetris_lib.h"

void show_files(char **tetriminos)
{
    int x = 0;

    for (x = 0; tetriminos[x] != NULL; x++)
        printf("%s", tetriminos[x]);
}

void special_show(char **tetriminos)
{
    int x = 0;

    for (x = 1; tetriminos[x] != NULL; x++)
        printf("%s", tetriminos[x]);
}
