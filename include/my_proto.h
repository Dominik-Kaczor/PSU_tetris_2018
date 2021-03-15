/*
** EPITECH PROJECT, 2019
** my_proto.h
** File description:
** contain all prototypes for navy
*/

#ifndef MY_PROTO_H_
#define MY_PROTO_H_

char *get_name(char *file);
int check_chars(char *tetri);
void display_debug(params_t *params, infos_t *settings);
int get_x(char *infos);
int get_y(char *infos);
int check_tetriminos(char **tetri);
int get_color(char *infos);
void set_size(infos_t *settings, char *infos);
int get_infos(params_t *params, infos_t *settings);
char **get_file(char *filepath);
int analyse(char *firstline);
int analyse_tetri(char **tetri, char *firstline);
params_t *sort_list(params_t *params);
int flags_management(int ac, char **av, infos_t *settings);
int manage_args(int option, infos_t *settings, char **av);
void display_help(char **av);
int set_settings(infos_t *settings, char **env);
int get_size_tab(char **infos);
int my_strisnum(char *str);
int get_len_size(char *tetris);
int get_max_size(char **tetris, int max_size);

#endif // MY_PROTO_H_ //
