/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function palindrome
*/

#include "palindrome.h"
#include <stdlib.h>

int ac_error_handling(int ac, char **av)
{
    if (ac < 3 || ac > 9)
        return 84;
    if (ac > 3 && my_strcmp(av[3], "-b") == 0 && my_getnbr(av[4]) > 10)
        return 84;
    if (ac > 3 && my_strcmp(av[3], "-b") == 0 && my_getnbr(av[4]) < 1)
        return 84;
    if (ac > 3 && my_strcmp(av[1], "-n") == 0 && (my_strcmp(av[3], "-p") == 0))
        return 84;
    if (ac > 3 && my_strcmp(av[1], "-p") == 0 && (my_strcmp(av[3], "-n") == 0))
        return 84;
    if (is_palindrome(my_getnbr(av[2])) == NOT_PALINDROME) {
        my_putstr("no solution\n");
        exit(0);
    }
    return 0;
}

int main (int ac, char **av)
{
    if (ac_error_handling(ac, av) == 84)
        return 84;
    h_flag(ac, av);
    get_flags(ac, av);
    return 0;
}
