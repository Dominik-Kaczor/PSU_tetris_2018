/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** checking and settings functions
*/

#include "my.h"
#include <ncurses.h>
#include <term.h>

int check_chars(char *tetri)
{
    int i = 0;

    while (tetri[i] != '\0') {
        if (tetri[i] == '*' || tetri[i] == ' ');
        else
            return (84);
        i++;
    }
    return (0);
}

int check_tetriminos(char **tetri)
{
    char *firstline;

    if (tetri[0] == NULL) {
        return (84);
    }
    firstline = my_strdup(tetri[0]);
    if (analyse(firstline) == 84)
        return (84);
    if (analyse_tetri(&tetri[1], firstline))
        return (84);
    return (0);
}

char *get_termenv(char **env)
{
    int i = 0;

    if (env == NULL)
        return (NULL);
    while (env[i]) {
        if (env[i][0] == 'T' && env[i][1] == 'E' && env[i][2] == 'R' &&
            env[i][3] == 'M' && env[i][4] == '=')
            return (&env[i][5]);
        i++;
    }
    return (NULL);
}

int set_settings(infos_t *settings, char **env)
{
    char *term = "xterm-256color";
    char bp[1024];
    int i = 0;

    if (term == NULL || env == NULL)
        return (84);
    if (setupterm(term, 0, &i) < 0)
        return (84);
    settings->left = tigetstr("kcub1");
    settings->right = tigetstr("kcuf1");
    settings->turn = tigetstr("kcuu1");
    settings->drop = tigetstr("kcud1");
    settings->quit = "q";
    settings->pause = " ";
    settings->next = 1;
    settings->level = 1;
    settings->x = 20;
    settings->y = 10;
    settings->debug = 0;
    settings->help = 0;
}
