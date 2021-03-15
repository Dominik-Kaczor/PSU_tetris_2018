/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** sort a linked list in alphabetical order
*/

#include "my.h"

int manage_b(int b)
{
    if (b == 57)
        b = 64;
    if (b == 90)
        b = 96;
    return (b);
}

params_t *sort_list(params_t *params)
{
    params_t *test = params;
    params_t *turk = malloc(sizeof(params_t));
    params_t *maz = turk;

    for (int b = 48; b <= 122; b++) {
        while (test->str != NULL) {
            if (test->str[0] == b) {
                turk->str = test->str;
                turk->next = malloc(sizeof(params_t));
                turk = turk->next;
            }
            test = test->next;
        }
        test = params;
        b = manage_b(b);
    }
    turk->str = NULL;
    turk->next = NULL;
    return (maz);
}
