/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** fusion of two string on one
*/

#include <stdlib.h>
#include <stdio.h>
int my_strlen(char *str);

char *my_strdup(char *s1)
{
    char *copy = malloc(sizeof(char) * my_strlen(s1) + 1);

    for (int i = 0; s1[i]; i++)
        copy[i] = s1[i];
    copy[my_strlen(s1)] = 0;
    return (copy);
}

char *my_strcat(char *s1, char *s2)
{
    int len = my_strlen(s1) + my_strlen(s2) + 1;
    char *tmp = malloc(sizeof(char) * len);
    int l = 0;

    if (s2[0] == 'P' && s2[1] == 'W' && s2[2] == 'D')
        return (s2);
    for (int i = 0; s1[i] != '\0'; i++) {
        tmp[l] = s1[i];
        l++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        tmp[l] = s2[i];
        l++;
    }
    l++;
    tmp[l] = '\0';
    return (tmp);
}
