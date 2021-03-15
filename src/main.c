/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** the file that contain the main of tetris
*/

#include "my.h"

int main(int ac, char **av, char **env)
{
    params_t *params = malloc(sizeof(params_t));
    infos_t *settings = malloc(sizeof(infos_t));

    if (get_infos(params, settings) == 84)
        return (84);
    params = sort_list(params);
    if (set_settings(settings, env) == 84)
        return (84);
    if (flags_management(ac, av, settings) == 84)
        return (84);
    if (settings->debug == 1 && settings->help == 0) {
        my_printf("*** DEBUG MODE ***\n");
        display_debug(params, settings);
        my_printf("Press any key to start Tetris\n");
    }
    return (0);
}
