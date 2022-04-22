/*
** EPITECH PROJECT, 2022
** Load_in_2array.c
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

char **load_in_2array(char *map, int charged_size)
{
    int x = 0, y = 0, a = 0;
    char **map_in_2array = malloc(sizeof(char *) * (charged_size + 1));

    for (x = 0; x < charged_size; x++)
        map_in_2array[x] = malloc(sizeof(char) * (charged_size + 4));
    for (x = 0; map[x] != '\0'; a++) {
        y = 0;
        for (; map[x] != '\n' && map[x] != '\0'; x++)
            map_in_2array[a][y++] = map[x];
        map_in_2array[a][y] = '\n';
        if (map[x] == '\n')
            x++;
        y++;
        map_in_2array[a][y] = '\0';
    }
    map_in_2array[a] = NULL;
    return (map_in_2array);
}
