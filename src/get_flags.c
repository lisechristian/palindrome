/*
** EPITECH PROJECT, 2021
** get_flags.c
** File description:
** get flags
*/

#include "palindrome.h"

int get_flags(int ac, char **av)
{
    if (my_strcmp(av[1], "-n") == 0) {
        if (n_flag(av) == 84)
            return 84;
    }
    if (my_strcmp(av[1], "-p") == 0) {
        if (p_flag(av) == 84)
            return 84;
    }
    return 0;
}
