/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** management of the arguments
*/

#include "my.h"

int manage_args_d(int option, infos_t *settings, char **av)
{
    switch (option) {
    case 'L' :
        if (optarg == NULL)
            settings->level = atoi(av[optind]);
        else
            settings->level = atoi(optarg);
        break;
    default:
        return (84);
    }
}

int manage_args_c(int option, infos_t *settings, char **av)
{
    switch (option) {
    case 'q' :
        if (optarg == NULL)
            settings->quit = my_strdup(av[optind]);
        else
            settings->quit = my_strdup(optarg);
        break;
    case 'p' :
        if (optarg == NULL)
            settings->pause = my_strdup(av[optind]);
        else
            settings->pause = my_strdup(optarg);
        break;
    default:
        if (manage_args_d(option, settings, av) == 84)
            return (84);
    }
    return (0);
}

int manage_args_b(int option, infos_t *settings, char **av)
{
    switch (option) {
    case ',' :
        settings->help = 1;
        display_help(av);
        break;
    case 'd' :
        if (optarg == NULL)
            settings->drop = my_strdup(av[optind]);
        else
            settings->drop = my_strdup(optarg);
        break;
    case 'w' :
        settings->next = 0;
        break;
    default:
        if (manage_args_c(option, settings, av) == 84)
            return (84);
    }
    return (0);
}

int manage_args_a(int option, infos_t *settings, char **av)
{
    switch (option) {
    case 't' :
        if (optarg == NULL)
            settings->turn = my_strdup(av[optind]);
        else
            settings->turn = my_strdup(optarg);
        break;
    case '/' :
        set_size(settings, optarg);
        break;
    case 'D' :
        settings->debug = 1;
        break;
    default:
        if (manage_args_b(option, settings, av) == 84)
            return (84);
    }
    return (0);
}

int manage_args(int option, infos_t *settings, char **av)
{
    switch (option) {
    case 'l' :
        if (optarg == NULL)
            settings->left = my_strdup(av[optind]);
        else
            settings->left = my_strdup(optarg);
        break;
    case 'r' :
        if (optarg == NULL)
            settings->right = my_strdup(av[optind]);
        else
            settings->right = my_strdup(optarg);
        break;
    default:
        if (manage_args_a(option, settings, av) == 84)
            return (84);
    }
    return (0);
}
