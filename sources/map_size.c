/*
** EPITECH PROJECT, 2022
** Map_size
** File description:
** No files discription
*/

#include "../includes/sokoban_lib.h"

int file_size(char *file)
{
    int charged_size = 0;
    char *charged_file = NULL;
    int file_desc = open(file, O_RDONLY);
    struct stat file_copy;

    if (stat(file, &file_copy) == -1)
        return (84);
    else
        charged_size = file_copy.st_size;
    return (charged_size);
}
