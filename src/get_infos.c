/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** functions used to get infos on data
*/

#include "my.h"
#include <dirent.h>
#include <stdio.h>
#include <string.h>

char *get_name(char *file)
{
    int i = 0;

    if (file[i] == '.')
        i++;
    while (file[i] != '\0') {
        if (file[i] == '.' && file[i + 1] == 't') {
            file[i] = '\0';
            return (file);
        }
        i++;
    }
    return (NULL);
}

int get_x(char *infos)
{
    char *dup = my_strdup(infos);
    int i = 0;
    int x = 0;

    while(dup[i] != ' ')
        i++;
    dup[i] = '\0';
    x = atoi(dup);
    return (x);
}

int get_y(char *infos)
{
    char *dup = my_strdup(infos);
    int i = 0;
    int y = 0;

    while(dup[i] != ' ')
        i++;
    i++;
    dup += i;
    i = 0;
    while(dup[i] != ' ')
        i++;
    dup[i] = '\0';
    y = atoi(dup);
    return (y);
}

int get_infos(params_t *params, infos_t *settings)
{
    DIR *d = opendir("./tetriminos");
    struct dirent *dir;
    params_t *tmp = params;

    settings->tetri_nb = 0;
    params = tmp;
    if (d == NULL || settings == NULL || params == NULL)
        return (84);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strstr(dir->d_name, ".tetrimino") != NULL) {
                settings->tetri_nb += 1;
                tmp->str = my_strdup(dir->d_name);
                tmp->next = malloc(sizeof(params_t));
                tmp = tmp->next;
            }
        }
        closedir(d);
    }
    tmp->next = NULL;
    return (0);
}

int get_color(char *infos)
{
    char *dup = my_strdup(infos);
    int i = 0;
    int color = 0;

    while(dup[i] != ' ')
        i++;
    i++;
    while(dup[i] != ' ')
        i++;
    i++;
    dup += i;
    color = atoi(dup);
    return (color);
}
