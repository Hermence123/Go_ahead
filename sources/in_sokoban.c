/*
** EPITECH PROJECT, 2022
** In_sokoban
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

void in_sokoban(int see, int *p_pos, char **map1, char **map2)
{
    clear();
    draw_maps(map1);
    refresh();
    see = getch();
    p_pos = p_position(p_pos, map1);
    show_me_way(see, p_pos, map1, map2);
}
