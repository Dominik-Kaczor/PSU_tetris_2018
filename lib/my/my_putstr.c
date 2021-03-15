/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** tkt
*/

#include <stddef.h>
#include <stdlib.h>
int my_strlen(char const *str);
void my_putchar(char c);

int check_slash(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    if (str[i - 1] == '/')
        return (1);
    return (0);
}

int my_put_str(char const *str)
{
    int i = 0;
    if (str == NULL)
        return (84);
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (i);
}
