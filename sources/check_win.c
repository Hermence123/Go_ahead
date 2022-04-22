/*
** EPITECH PROJECT, 2022
** Check_win
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int check_win(int *p_pos, char **map_2arr, char ** map_copy)
{
    int x = 0, a = 0, y = 0, b = 0;

    for (x = 0; map_2arr[x] != NULL, map_copy[a]; x++, a++) {
        for (y = 0; map_2arr[x][y] != '\n',
                map_copy[a][b] != '\n'; y++, b++)
            if ((map_copy[x][y] == 'O' &&
                (map_copy[x][y] == 'P' ||
                map_copy[x][y] == 'X' ||
                map_copy[x][y] == '#' ||
                map_copy[x][y] == ' ')) &&
                (map_2arr[x][y] != 'O' &&
                (map_2arr[x][y] == 'P' ||
                map_2arr[x][y] == 'X' ||
                map_2arr[x][y] == '#' ||
                map_2arr[x][y] == ' ')))
                return (0);
            else
                return (1);
    }
}
