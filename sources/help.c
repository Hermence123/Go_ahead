/*
** EPITECH PROJECT, 2022
** Tetris_Help
** File description:
** To make know how the programm run
*/

#include "../includes/tetris_lib.h"

void help1(void)
{
    printf("Usage: ./tetris [options]\n");
    printf("Options:\n");
    printf("  --help                Display this help\n");
    printf("  -L --level={num}      Start Tetris at level num");
    printf(" (def: 1)\n");
    printf("  -l --key-left={K}     Move the tetrimino LEFT using");
    printf(" the K key (def: left arrow)\n");
    printf("  -r --key-right={K}    Move the tetrimino RIGHT using");
    printf(" the K key (def: right arrow)\n");
    printf("  -t --key-turn={K}     TURN the tetrimino clockwise");
    printf(" 90d using the K key (def: top arrow)\n");
}

void help2(void)
{
    printf("  -d --key-drop={K}     DROP the tetrimino using");
    printf(" the K key (def: down arrow)\n");
    printf("  -q --key-quit={K}     QUIT the game using the K key");
    printf(" (def: 'q' key)\n");
    printf("  -p --key-pause={K}    PAUSE/RESTART the game using");
    printf(" the K key (def: space bar)\n");
    printf("  --map-size={row,col}  Set the numbers of rows and");
    printf(" columns of the map (def: 20,10)\n");
    printf("  -w --without-next     Hide next tetrimino");
    printf(" (def: false)\n");
    printf("  -D --debug            Debug mode (def: false)\n");
}

void help(void)
{
    help1();
    help2();
}
