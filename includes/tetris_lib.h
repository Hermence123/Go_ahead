/*
** EPITECH PROJECT, 2022
** Tetris_lib
** File description:
** Small functions resources
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ncurses.h>
#include <getopt.h>

static struct option fgs[] =
{
    {"help", no_argument, 0, 'h'},
    {"level", required_argument, 0, 'L'},
    {"key-left", required_argument, 0, 'l'},
    {"key-right", required_argument, 0, 'r'},
    {"key-turn", required_argument, 0, 't'},
    {"key-drop", required_argument, 0, 'd'},
    {"key-quit", required_argument, 0, 'q'},
    {"key-pause", required_argument, 0, 'p'},
    {"map-size", required_argument, 0, 'm'},
    {"without-next", no_argument, 0, 'w'},
    {"debug", no_argument, 0, 'D'},
    {0, 0, 0, 0}
};

typedef struct {
    int key_left;
    int key_right;
    int key_turn;
    int key_drop;
    int key_quit;
    int key_pause;
    char *next;
    int level;
    int *size;
    int view;
}my_key;

typedef struct {
    char *minos4;
    char *minos5;
    char *minos6;
    char *minos7;
    char *minosb;
    char *minosl;
    char *minosq;
    char **tminos4;
    char **tminos5;
    char **tminos6;
    char **tminos7;
    char **tminosb;
    char **tminosl;
    char **tminosq;
    int sz1;
    int sz2;
    int sz3;
    int sz4;
    int sz5;
    int sz6;
    int sz7;
    int *coe4;
    int *coe5;
    int *coe6;
    int *coe7;
    int *coeb;
    int *coel;
    int *coeq;
    char *line14;
    char *line15;
    char *line16;
    char *line17;
    char *line1b;
    char *line1l;
    char *line1q;
}minos;

int my_strlen(char *str);
int main(int ac, char **av);
void show_windows(void);
void step1(int ac, char **av, struct option fgs[], my_key *find);
void bid_d_flag(void);
void help1(void);
void help2(void);
void help(void);
void ini_key(my_key *find);
void show_key_part(my_key *find);
char *check(int x);
char *no_case(int x);
char *load_files(char *file);
int file_size(char *file);
char **arr2(char *tetriminos, int charged_size);
void show_files(char **tetriminos);
void special_show(char **tetriminos);
char *get_line1(char **tetriminos);
int *get_coe(char *first_line);
void show_coes(int *stock_coes);
void ini_minos(minos **f);
void size_minos(minos **f);
void tab_minos(minos **f);
void before_part2_debug(minos *f);
void show_part2_debug(minos *f);
void ini_line1(minos **f);
void ini_coe(minos **f);
void debug_mode(int ac, char **av, struct option fgs[], my_key *fi, minos *f);
void debug_part2_1(minos *f);
void debug_part2_2(minos *f);
void debug_part2_3(minos *f);
int debug_condition(int ac, char **av);
void display_text(char *str, int x, int y);
void display1(void);
void display3(void);
void display2(void);
