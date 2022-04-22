/*
** EPITECH PROJECT, 2022
** Sokoban_main
** File description:
** No files description
*/

#include "../includes/sokoban_lib.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (ac == 2) {
        if (av[1][0] == '-', av[1][1] == 'h', av[1][2] == '\0')
            sokoban_usage();
        return (my_sokoban(av));
    }
    return (0);
}
