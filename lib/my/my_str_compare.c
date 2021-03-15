/*
** EPITECH PROJECT, 2019
** my_str_compare.c
** File description:
** compare two string and return a different value if they are differents
*/

int my_strlen(char const *str);

int my_str_compare(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 != len2)
        return (1);
    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i])
            return (1);
    }
    return (0);
}
