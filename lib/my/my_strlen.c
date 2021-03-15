/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** tkt
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int my_strlen_spe(char *str, char carac)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == carac)
            nb++;
    }
    nb += 2;
    return (nb);
}

int my_strlen_space(char *str, char carac)
{
    int nb = 0;

    for (int i = 0; str[i] != carac && str[i] != '\0'; i++) {
        nb++;
    }
    return (nb + 1);
}
