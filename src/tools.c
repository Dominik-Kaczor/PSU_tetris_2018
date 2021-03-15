/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** little usefull functions
*/

#include "my.h"

void set_size(infos_t *settings, char *infos)
{
    settings->x = (infos[0] - 48);
    settings->y = (infos[2] - 48);
}

int get_size_tab(char **infos)
{
    int i = 0;

    while (infos[i] != NULL)
        i++;
    return (i);
}

int my_strisnum(char *str)
{
    int i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            i += 1;
        else
            return (0);
    }
    return (1);
}

int get_len_size(char *tetris)
{
    int size = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; tetris[i] != '\0'; i++) {
        if (tetris[i] == '*') {
            start = i;
            break;
        }
    }
    for (int i = my_strlen(tetris); i != 0; i--) {
        if (tetris[i] == '*') {
            end = i;
            break;
        }
    }
    size = end - start + 1;
    return (size);
}

int get_max_size(char **tetris, int max_size)
{
    for (int i = 1; tetris[i] != NULL; i++) {
        if (max_size < get_len_size(tetris[i]))
            max_size = get_len_size(tetris[i]);
    }
    return (max_size);
}
