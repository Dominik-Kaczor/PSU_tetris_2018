/*
** EPITECH PROJECT, 2019
** displays.c
** File description:
** all functions used to display
*/

#include "my.h"

void display_size_color(char *infos)
{
    int x = get_x(infos);
    int y = get_y(infos);
    int color = get_color(infos);

    my_printf("Size %d*%d : Color %d :\n", x, y, color);
}

void display_tetriminos(char *filepath)
{
    char *path = my_add_to_dest("tetriminos/", filepath);
    char **tetriminos = get_file(path);
    char *name = get_name(filepath);

    my_printf("Tetriminos : Name %s : ", name);
    if (check_tetriminos(tetriminos) == 84) {
        my_printf("Error\n");
        return;
    }
    display_size_color(tetriminos[0]);
    for (int i = 1; tetriminos[i] != NULL; i++)
        my_printf("%s\n", tetriminos[i]);
}

void display_spe(char *str)
{
    int j = 0;

    if (str[0] < 0) {
        while (str[j] != '\0') {
            if (str[j] > 0)
                my_printf("%c", str[j]);
            j++;
        }
        if (j == 3)
            my_printf("(space)");
    } else {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 27)
                my_printf("^E");
            else if (str[i] == ' ')
                my_printf("(space)");
            else
                my_printf("%c", str[i]);
        }
    }
}

void display_settings(infos_t *settings)
{
    my_printf("Key Left : ");
    display_spe(settings->left);
    my_printf("\nKey Right : ");
    display_spe(settings->right);
    my_printf("\nKey Turn : ");
    display_spe(settings->turn);
    my_printf("\nKey Drop : ");
    display_spe(settings->drop);
    my_printf("\nKey Quit : ");
    display_spe(settings->quit);
    my_printf("\nKey Pause : ");
    display_spe(settings->pause);
    my_printf("\nNext : ");
    if (settings->next == 1)
        my_printf("Yes\n");
    else if (settings->next == 0)
        my_printf("No\n");
}

void display_debug(params_t *params, infos_t *settings)
{
    display_settings(settings);
    my_printf("Level : %d\n", settings->level);
    my_printf("Size : %d*%d\n", settings->x, settings->y);
    my_printf("Tetriminos : %d\n", settings->tetri_nb);
    while (params->next != NULL) {
        display_tetriminos(params->str);
        params = params->next;
    }
}
