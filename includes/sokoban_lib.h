/*
** EPITECH PROJECT, 2022
** Sokoban_lib
** File description:
** No files description
*/

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int sokoban_usage(void);
void my_putchar(char c);
int my_putstr(char *str);
int check_arg(char **av);
int check_x_o(char *map);
char *load_map(char *map);
int file_size(char *file);
int my_sokoban(char **av);
int main(int ac, char **av);
void draw_maps(char **map_2arr);
int find_cols(int cols, char *map);
int find_lines(int lines, char *map);
int check_maps(int check, char *map);
void cond_up1(int *p_pos, char **map_2arr);
void cond_up2(int *p_pos, char **map_2arr);
void cond_up3(int *p_pos, char **map_2arr);
void cond_down1(int *p_pos, char **map_2arr);
void cond_down2(int *p_pos, char **map_2arr);
void cond_down3(int *p_pos, char **map_2arr);
void cond_left1(int *p_pos, char **map_2arr);
void cond_left2(int *p_pos, char **map_2arr);
void cond_left3(int *p_pos, char **map_2arr);
int *p_position(int * p_pos, char **map_2arr);
void cond_right1(int *p_pos, char **map_2arr);
void cond_right2(int *p_pos, char **map_2arr);
void cond_right3(int *p_pos, char **map_2arr);
char **load_in_2array(char *map, int charged_size);
int check_win(int *p_pos, char **map_2arr, char **map_copy);
void in_sokoban(int see, int *p_pos, char **map1, char **map2);
void show_me_way(int see, int *p_pos, char **map1, char **map2);
void move_to_right(int see, int *p_pos, char **map1, char **map2);
void move_to_left(int see, int *p_pos, char **map_2arr, char **map_copy);
void move_to_down(int see, int *p_pos, char **map_2arr, char **map_copy);
void move_to_up(int see, int *p_pos, char **map_in_2arr, char **map_copy);
