/*
** EPITECH PROJECT, 2022
** loap_map
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

char *load_map(char *file)
{
    char *charged_file = NULL;
    int file_desc = open(file, O_RDONLY);
    int charged_size = file_size(file);
    struct stat file_copy;

    if (file_desc == -1)
        return (NULL);
    if (stat(file, &file_copy) == -1)
        return (NULL);
    charged_file = malloc(sizeof(char) * (file_copy.st_size + 1));
    read(file_desc, charged_file, file_copy.st_size);
    charged_file[charged_size] = '\0';
    close (file_desc);
    return (charged_file);
}
