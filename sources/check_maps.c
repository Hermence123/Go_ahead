/*
** EPITECH PROJECT, 2022
** Check_maps
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int check_x_o(char *map)
{
    int w = 0, x = 0, o = 0;
    int good = 1, bad = -1;
    
    for (w = 0; map[w] != '\0'; w++) {
        if (map[w] == 'X') {
            x++;
        }
        else if (map[w] == 'O') {
            o++;
        }
    }
    if (x == o)
        return (good);
    else
        return (bad);
}

int check_maps(int check, char *map)
{
    int x = 0;
    int good = 1, bad = 0;
    
    for (x = 0; map[x] != '\0'; x++) {
        if ((map[x] == '#' || map[x] == ' ' ||
            map[x] == 'P' || map[x] == 'O' ||
            map[x] == '\n' || map[x] == 'X') &&
            check_x_o(map) == 1)
            check = good;
        else
            check = bad;
    }
    return (check);
}
