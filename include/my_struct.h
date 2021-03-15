/*
** EPITECH PROJECT, 2019
** navy.h
** File description:
** structur
*/

#ifndef STRU_H_
#define STRU_H_

typedef struct str_need_s {
    int size;
    char **array;
    int pos;
    int i;
    int j;
}str_need;

typedef struct infos_s {
    char *left;
    char *right;
    char *turn;
    char *drop;
    char *quit;
    char *pause;
    int next;
    int level;
    int x;
    int y;
    int tetri_nb;
    int debug;
    int help;
}infos_t;

typedef struct params_s {
    char *str;
    struct params_s *next;
}params_t;

#endif // STRU_H_ //
