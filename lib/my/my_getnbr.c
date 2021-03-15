/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int a = 0;
    int b = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            b = b * (-1);
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            a = a * 10;
            a = a + str[i] - '0';
            i += 1;
        }
    }
    return (a * b);
}
