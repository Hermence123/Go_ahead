/*
** EPITECH PROJECT, 2022
** Move_to_up
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

void cond_up1(int *p_pos, char **map_in_2arr)
{
    map_in_2arr[p_pos[0]][p_pos[1]] = ' ';
    map_in_2arr[p_pos[0] - 1][p_pos[1]] = 'P';
    map_in_2arr[p_pos[0] - 2][p_pos[1]] = 'X';
}

void cond_up2(int *p_pos, char **map_in_2arr)
{
    map_in_2arr[p_pos[0] - 1][p_pos[1]] = 'P';
    map_in_2arr[p_pos[0]][p_pos[1]] = ' ';
}

void cond_up3(int *p_pos, char **map_in_2arr)
{
    map_in_2arr[p_pos[0] - 1][p_pos[1]] = 'X';
    map_in_2arr[p_pos[0]][p_pos[1]] = 'P';
}

void move_to_up(int see, int *p_pos, char **map_2arr, char **map_copy)
{
    if (map_2arr[p_pos[0] - 1][p_pos[1]] == 'X' &&
        (map_2arr[p_pos[0] - 2][p_pos[1]] == ' ' ||
        map_2arr[p_pos[0] - 2][p_pos[1]] == 'O'))
        cond_up1(p_pos, map_2arr);
    else if ((map_2arr[p_pos[0] - 1][p_pos[1]] == ' ' ||
            map_2arr[p_pos[0] - 1][p_pos[1]] == 'O') &&
            map_2arr[p_pos[0] - 2][p_pos[1]] != '#')
        cond_up2(p_pos, map_2arr);
    if (map_2arr[p_pos[0] - 1][p_pos[1]] == 'X' &&
        map_2arr[p_pos[0] - 2][p_pos[1]] == '#')
        cond_up3(p_pos, map_2arr);
    else if (map_2arr[p_pos[0] - 1][p_pos[1]] == ' ' ||
            map_2arr[p_pos[0] - 1][p_pos[1]] == 'O')
        cond_up2(p_pos, map_2arr);
    if (map_2arr[p_pos[0]][p_pos[1]] == ' ' &&
        map_copy[p_pos[0]][p_pos[1]] == 'O')
        map_2arr[p_pos[0]][p_pos[1]] = 'O';
}
