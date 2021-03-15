/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** functions used to manage flags
*/

#include "my.h"
#include <getopt.h>

int flags_management(int ac, char **av, infos_t *settings)
{
    char optstring[] = "LlrtdqpwD-";
    int option = 0;
    int z = 0;
    static struct option long_options[] = { {"debug", no_argument, 0, 'D'},
    {"help", no_argument, 0, ','}, {"whithout-next", no_argument, 0, 'w'},
    {"level=", required_argument, 0, 'L'},
    {"key-right=", required_argument, 0, 'r'},
    {"key-turn=", required_argument, 0, 't'},
    {"key-drop=", required_argument, 0, 'd'},
    {"key-quit=", required_argument, 0, 'q'},
    {"key-pause=", required_argument, 0, 'p'},
    {"map-size=", required_argument, 0, '/'}, {0, 0, 0, 0} };

    while ((option = getopt_long(ac, av, optstring, long_options, &z)) != -1) {
        if (manage_args(option, settings, av) == 84)
            return (84);
    }
    return (0);
}
