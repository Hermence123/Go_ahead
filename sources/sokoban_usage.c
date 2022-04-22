/*
** EPITECH PROJECT, 2022
** Sokoban_usage
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int sokoban_usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, ");
    my_putstr("containing '#' for walls, 'P' for the player, ");
    my_putstr("'X' for boxes and 'O' for storage locations.\n");
    return (0);
}
