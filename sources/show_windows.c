/*
** EPITECH PROJECT, 2022
** Show_windows
** File description:
** Show_ncurse_windows
*/

#include "../includes/tetris_lib.h"
#include <ncurses.h>

void display_text(char *str, int x, int y)
{
    for (int i = 0; str[i]; i++) {
        mvaddch(y, (x + i), str[i]);
    }
}

void display1(void)
{
    display_text(" * * * * * * * * * * * * * * * *", 0, 0);
    display_text("   *   *       *   *   *   *", 0, 1);
    display_text("   *   * * *   *   * *   * * * *", 0, 2);
    display_text("   *   *       *   *   * *     *", 0, 3);
    display_text("   *   * * *   *   *   * * * * *", 0, 4);
    display_text("/---------------------------\\", 0, 6);
    display_text("|                           |", 0, 7);
    display_text("| High Score                |", 0, 8);
    display_text("| Score                     |", 0, 9);
    display_text("|                           |", 0, 10);
    display_text("| Lines                     |", 0, 11);
    display_text("| Level                     |", 0, 12);
    display_text("|                           |", 0, 13);
    display_text("| Timer                     |", 0, 14);
    display_text("\\---------------------------/", 0, 15);
}

void display3(void)
{
    display_text("|                          |", 33, 15);
    display_text("|                          |", 33, 16);
    display_text("|                          |", 33, 17);
    display_text("|                          |", 33, 18);
    display_text("|                          |", 33, 19);
    display_text("+--------------------------+", 33, 20);
    display_text("/-next----\\", 62, 0);
    display_text("|         |", 62, 1);
    display_text("|         |", 62, 2);
    display_text("\\---------/", 62, 3);
}

void display2(void)
{
    display_text("+--------------------------+", 33, 0);
    display_text("|                          |", 33, 1);
    display_text("|                          |", 33, 2);
    display_text("|                          |", 33, 3);
    display_text("|                          |", 33, 4);
    display_text("|                          |", 33, 5);
    display_text("|                          |", 33, 6);
    display_text("|                          |", 33, 7);
    display_text("|                          |", 33, 8);
    display_text("|                          |", 33, 9);
    display_text("|                          |", 33, 10);
    display_text("|                          |", 33, 11);
    display_text("|                          |", 33, 12);
    display_text("|                          |", 33, 13);
    display_text("|                          |", 33, 14);
}

void show_windows(void)
{
    int see = 0, action = 0;

    initscr();
    curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        refresh();
        display1();
        display2();
        display3();
        see = getch();
        if (see == 113)
            break;
    }
    endwin();
}
