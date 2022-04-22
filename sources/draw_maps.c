/*
** EPITECH PROJECT, 2022
** Draw_maps
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

void draw_maps(char **map_in_2array)
{
    int x = 0;

    for (x = 0; map_in_2array[x] != NULL; x++)
        printw("%s", map_in_2array[x]);
}
