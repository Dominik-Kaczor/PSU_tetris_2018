/*
** EPITECH PROJECT, 2019
** strcat.c
** File description:
** all functions that about string management
*/

#include <stdlib.h>
#include <stddef.h>
#include "../../include/my_struct.h"
int my_strlen_spe(char *str, char carac);

void init_struct(str_need *var, char *str, char carac)
{
    var->size = my_strlen_spe(str, carac);
    var->array = malloc(sizeof(char *) * var->size);
    var->pos = 0;
    var->i = 0;
    var->j = 0;
}

void loop_management(char *str, char carac, str_need *var)
{
    if (str[var->pos] == carac || str[var->pos] == '\n'
        || str[var->pos] == ' ' || str[var->pos] == '\t') {
        while (str[var->pos] == carac || str[var->pos] == '\n'
        || str[var->pos] == ' ' || str[var->pos] == '\t')
            var->pos += 1;
        var->i += 1;
        var->j = 0;
    }
    var->array[var->i] = malloc(sizeof(*var->array) *
                                my_strlen_spe(str + var->pos, carac));
    while (str[var->pos] != carac && str[var->pos] != '\n' &&
           str[var->pos] != '\0') {
        var->array[var->i][var->j] = str[var->pos];
        var->j++;
        var->pos++;
    }
    var->array[var->i][var->j] = '\0';
}

void loop_management_spe(char *str, char carac, str_need *var)
{
    if (str[var->pos] == carac || str[var->pos] == '\n'
        || str[var->pos] == ' ' || str[var->pos] == '\t') {
        while (str[var->pos] == carac || str[var->pos] == '\n'
        || str[var->pos] == ' ' || str[var->pos] == '\t')
            var->pos += 1;
        var->i += 1;
        var->j = 0;
    }
    var->array[var->i] = malloc(sizeof(*var->array) *
                                my_strlen_spe(str + var->pos, carac));
    while (str[var->pos] != carac && str[var->pos] != '\n' &&
           str[var->pos] != '\0' && str[var->pos] != '\t') {
        var->array[var->i][var->j] = str[var->pos];
        var->j++;
        var->pos++;
    }
    var->array[var->i][var->j] = '\0';
}

char **my_str_to_wordarray(char *str, char carac)
{
    str_need *var = malloc(sizeof(str_need));

    init_struct(var, str, carac);
    while (str[var->pos] != '\n' && str[var->pos] != '\0') {
        loop_management(str, carac, var);
    }
    var->array[var->i + 1] = NULL;
    return (var->array);
}

char **my_str_to_wordarray_spe(char *str, char carac)
{
    str_need *var = malloc(sizeof(str_need));

    init_struct(var, str, carac);
    while (str[var->pos] != '\n' && str[var->pos] != '\0') {
        loop_management_spe(str, carac, var);
    }
    var->array[var->i + 1] = NULL;
    return (var->array);
}
