/*
** EPITECH PROJECT, 2022
** Show_me_direction
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

void restart_sokoban(int *p_pos, char **map_2arr, char **map_copy)
{
    if (map_2arr[p_pos[0]][p_pos[1]] == 'P' &&
        map_copy[p_pos[0]][p_pos[1]] == 'O')
        map_2arr[p_pos[0]][p_pos[1]] == 'O';
}

void show_me_way(int see, int *p_pos, char **map_2arr, char **map_copy)
{
    if (see == KEY_RIGHT && map_2arr[p_pos[0]][p_pos[1]] == 'P' &&
        map_2arr[p_pos[0]][p_pos[1] + 1] != '#')
        move_to_right(see, p_pos, map_2arr, map_copy);
    else if (see == KEY_LEFT && map_2arr[p_pos[0]][p_pos[1]] == 'P' &&
            map_2arr[p_pos[0]][p_pos[1] - 1] != '#')
        move_to_left(see, p_pos, map_2arr, map_copy);
    if (see == KEY_UP && map_2arr[p_pos[0]][p_pos[1]] == 'P' &&
        map_2arr[p_pos[0] - 1][p_pos[1]] != '#')
        move_to_up(see, p_pos, map_2arr, map_copy);
    else if (see == KEY_DOWN && map_2arr[p_pos[0]][p_pos[1]] == 'P' &&
            map_2arr[p_pos[0] + 1][p_pos[1]] != '#')
        move_to_down(see, p_pos, map_2arr, map_copy);
}
