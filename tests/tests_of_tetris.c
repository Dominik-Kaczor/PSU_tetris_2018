/*
** EPITECH PROJECT, 2019
** tetris
** File description:
** tests for tetris
*/

#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include "my.h"

int main_test(int ac, char **av, char **env);
extern char** environ;

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
    cr_redirect_stdin();
}

Test(tetris, simple_debug, .init = redirect_all_std)
{
    int ac = 2;
    char *av[2] = {"./tetris", "-D"};
    FILE *solved = fopen("tests/outpout/simple_debug", "r");

    main_test(ac, av, environ);
    cr_assert_stdout_eq(solved);
    fclose(solved);
}

Test(tetris, subject_example, .init = redirect_all_std)
{
    int ac = 7;
    char *av[7] = {"./tetris", "-d", "‘x’", "-D", "--key-turn=‘ ’",
    "-p", "‘p’"};
    FILE *solved = fopen("tests/outpout/subject_example", "r");

    main_test(ac, av, environ);
    cr_assert_stdout_eq(solved);
    fclose(solved);
}

Test(tetris, help, .init = redirect_all_std)
{
    int ac = 2;
    char *av[2] = {"./tetris", "--help"};
    FILE *solved = fopen("tests/outpout/help", "r");

    main_test(ac, av, environ);
    cr_assert_stdout_eq(solved);
    fclose(solved);
}
