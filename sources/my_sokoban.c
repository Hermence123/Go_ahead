/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int my_sokoban(char **av)
{
    int see = 0, action = 0, charged_size = file_size(av[1]);
    char *map = load_map(av[1]);
    char **map_2array;
    char **map_copy;
    int *p_pos, check;

    if (map == NULL || check_maps(check, map) != 1)
        return (84);
    map_2array = load_in_2array(map, charged_size);
    map_copy = load_in_2array(map, charged_size);
    p_pos = p_position(p_pos, map_2array);
    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    while (1)
        in_sokoban(see, p_pos, map_2array, map_copy);
    endwin();
    return (0);
}
