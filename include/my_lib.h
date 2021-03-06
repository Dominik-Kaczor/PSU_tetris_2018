/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** prototyp and include
*/

#ifndef LIB_H_
#define LIB_H_

char *my_strcat(char *s1, char *s2);
int my_str_compare(char *str1, char *str2);
char *my_strdup(char *s1);
char **my_str_to_wordarray(char *str, char carac);
char **my_str_to_wordarray_spe(char *str, char carac);
char *my_strcat(char *dest, char *add);
int my_printf(char *str, ...);
int easy_flags_management(int argument, va_list display);
int my_put_nbr_base(unsigned long long nb, char *base_str);
void my_putchar(char c);
int flags_with_base_management(int argument, va_list display);
int my_getnbr(char const *str);
int advanced_flags_management(int argument, va_list display);
void my_print_special(char *str);
int my_put_nbr(int nb);
int my_put_str(char const *str);
int my_strlen_spe(char *str, char carac);
char *my_add_to_dest(char *dest, char *add);
char *get_next_line(int fd);
int my_strlen_space(char *str, char carac);
int my_strlen(char *str);
int none_signed(long nb);

#endif // LIB_H_ //
