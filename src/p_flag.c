/*
** EPITECH PROJECT, 2021
** p_flag.c
** File description:
** handle -p
*/

#include "palindrome.h"

int p_flag(char **av)
{
    int p = my_getnbr(av[2]);
    
    if (p < 0)
        return 84;
    return 0;
}
