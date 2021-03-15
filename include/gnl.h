/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** library necessary for the get_next_line function
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);
char *get_next_line(int fd);
char *my_strncpy(char *dest, char *src, int n);

#ifndef READ_SIZE
#   define READ_SIZE 64
#endif /* !READ_SIZE */
#endif /* GET_NEXT_LINE_H_ */
