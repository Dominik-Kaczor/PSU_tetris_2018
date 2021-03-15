/*
** EPITECH PROJECT, 2019
** my_add_to_dest.c
** File description:
** add a string to another string named dest
*/

#include <stdlib.h>
int my_strlen(char *str);

char *my_add_to_dest(char *dest, char *add)
{
    int len_dest = my_strlen(dest);
    int len_add = my_strlen(add);
    char *res = malloc(sizeof(char) * (len_dest + len_add + 1));
    int pos = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        res[i] = dest[i];
        pos++;
    }
    for (int i = 0; add[i] != '\0'; i++) {
        res[pos] = add[i];
        pos++;
    }
    res[pos] = '\0';
    return (res);
}
