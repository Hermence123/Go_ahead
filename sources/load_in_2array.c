/*
** EPITECH PROJECT, 2022
** Load_in_2array.c
** File description:
** To load_in_2array
*/

#include "../includes/tetris_lib.h"

char **arr2(char *tetri, int charged_size)
{
    int x = 0, y = 0, a = 0;
    char **tetriminos = malloc(sizeof(char *) * (charged_size + 1));
    for (x = 0; x < charged_size; x++)
        tetriminos[x] = malloc(sizeof(char) * (charged_size + 4));
    for (x = 0; tetri[x] != '\0'; a++) {
        y = 0;
        for (; tetri[x] != '\n' && tetri[x] != '\0'; x++)
            tetriminos[a][y++] = tetri[x];
        tetriminos[a][y] = '\n';
        if (tetriminos[a][y - 1] == ' ') {
            tetriminos[a][y - 1] = '\n';
            tetriminos[a][y] = '\0';
        }
        if (tetri[x] == '\n')
            x++;
        y++;
        tetriminos[a][y] = '\0';
    }
    tetriminos[a] = NULL;
    return (tetriminos);
}
