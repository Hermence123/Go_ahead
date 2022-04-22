/*
** EPITECH PROJECT, 2022
** P_position
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int *p_position(int *p_pos, char **map_in_2array)
{
    int x = 0, y = 0;
    
    p_pos = malloc(sizeof(int) * 3);
    for (x = 0; map_in_2array[x] != NULL; x++) {
        for (y = 0; map_in_2array[x][y] != '\n'; y++) {
            if (map_in_2array[x][y] == 'P') {
                p_pos[0] = x;
                p_pos[1] = y;
            }
        }
    }
    return (p_pos);
}
