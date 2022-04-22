/*
** EPITECH PROJECT, 2022
** Tetris_main
** File description:
** To run Functions
*/

#include "../includes/tetris_lib.h"

int main(int ac, char **av)
{
    struct option *fgs = malloc(sizeof(struct option));
    my_key *find = malloc(sizeof(my_key));
    minos *f = malloc(sizeof(minos));
    if (ac > 1 && debug_condition(ac, av) == 1)
        debug_mode(ac, av, fgs, find, f);
    else if (ac == 2 && strcmp(av[1], "--help") == 0) {
        help();
        return 0;
    }
    else {
        show_windows();
    }
    return (84);
}
