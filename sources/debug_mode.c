/*
** EPITECH PROJECT, 2022
** Manage_flags
** File description:
** For managing flags
*/

#include "../includes/tetris_lib.h"

void debug_mode(int ac, char **av, struct option fgs[], my_key *find, minos *f)
{
    int option = 0;
    ini_key(find);
    while ((option = getopt_long(ac, av, "DwhL:l:r:t:d:q:p:m",
            fgs, &option)) != -1) {
        switch (option) {
        case 'l':
            find->key_left = atoi(optarg);
            break;
        case 'r':
            find->key_right = atoi(optarg);
            break;
        case 't':
            find->key_turn = atoi(optarg);
            break;
        case 'd':
            find->key_drop = atoi(optarg);
            break;
        case 'q':
            find->key_quit = atoi(optarg);
            break;
        case 'p':
            find->key_pause = atoi(optarg);
            break;
        case 'w':
            find->next = "No";
            break;
        case 'h':
            help();
            break;
        case 'L':
            find->level = atoi(optarg);
            break;
        case 'D':
            find->view = 2;
            break;
        }
    }
    if (find->view != 1) {
        show_key_part(find);
        show_part2_debug(f);
    }
}
