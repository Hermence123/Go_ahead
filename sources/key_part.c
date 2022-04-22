/*
** EPITECH PROJECT, 2022
** Deburg_mode
** File description:
** To make deburg_mode
*/

#include "../includes/tetris_lib.h"

void ini_key(my_key *find)
{
    find->key_left = 260;
    find->key_right = 261;
    find->key_turn = 259;
    find->key_drop = 258;
    find->key_quit = 113;
    find->key_pause = 32;
    find->level = 1;
    find->size = malloc(sizeof(int) * 2);
    find->size[0] = 20;
    find->size[1] = 10;
    find->next = malloc(sizeof(char) * 5);
    find->next = "Yes";
    find->view = 1;
}

char *check(int x)
{
    if (x == 260)
        return ("KEY_LEFT");
    if (x == 261)
        return ("KEY_RIGHT");
    if (x == 259)
        return ("KEY_UP");
    if (x == 258)
        return ("KEY_DOWN");
    if (x == 113)
        return ("q");
    if (x == 32)
        return (" ");
    if (x != 260 && x != 261 && x != 259 && x != 258
        && x != 113 && x != 32)
        return (no_case(x));
}

void show_key_part(my_key *find)
{
    printf("Key left: %s (%d)\n", check(find->key_left), find->key_left);
    printf("Key right: %s (%d)\n", check(find->key_right), find->key_right);
    printf("Key turn: %s (%d)\n", check(find->key_turn), find->key_turn);
    printf("Key drop: %s (%d)\n", check(find->key_drop), find->key_drop);
    printf("Key quit: %s (%d)\n", check(find->key_quit), find->key_quit);
    printf("Key pause: %s (%d)\n", check(find->key_pause), find->key_pause);
    printf("Next: %s\n", find->next);
    printf("Level: %d\n", find->level);
    printf("Size: %d*%d\n", find->size[0], find->size[1]);
}
