/*
** EPITECH PROJECT, 2019
** analyse.c
** File description:
** analyse data functions
*/

#include "my.h"

int analyse(char *firstline)
{
    char **infos = my_str_to_wordarray(firstline, ' ');
    int size = get_size_tab(infos);

    if (size != 3)
        return (84);
    if (!my_strisnum(infos[0]) || !my_strisnum(infos[1]) ||
    !my_strisnum(infos[2]))
        return (84);
    if (atoi(infos[2]) > 8 || atoi(infos[2]) < 1)
        return (84);
    if (atoi(infos[0]) < 1 || atoi(infos[1]) < 1)
        return (84);
    return (0);
}

int analyse_tetri(char **tetri, char *firstline)
{
    int size = get_size_tab(tetri);
    char **infos = my_str_to_wordarray(firstline, ' ');
    int x = atoi(infos[0]);
    int y = atoi(infos[1]);
    int x_bis = get_max_size(tetri, x);

    if (y != size)
        return (84);
    if (x != x_bis)
        return (84);
    for (int i = 0; tetri[i] != NULL; i++) {
        if (check_chars(tetri[i]) == 84)
            return (84);
    }
    return (0);
}
