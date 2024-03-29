/*
** EPITECH PROJECT, 2021
** h_flag.c
** File description:
** -h handling
*/

#include "palindrome.h"

void print_h_flag(void)
{
    my_putstr("USAGE\n");
    my_putstr("   ./palindrome -n number -p palindrome [-b base] [-imin i]");
    my_putstr("[-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("   -n n      integer to be transformed (>=0)\n");
    my_putstr("   -p pal    palindromic number to be obtained (incompatible");
    my_putstr(" with the -noption) (>=0)\n");
    my_putstr("            if defined, all fitting values of n will be ");
    my_putstr("output\n");
    my_putstr("   -b base   base in which the procedure will be executed ");
    my_putstr("(1<b<=10) [def: 10]\n");
    my_putstr("   -imin i   minimum number of iterations, included (>=0) ");
    my_putstr("[def: 0]\n");
    my_putstr("   -imax i   minimum number of iterations, included (>=0) ");
    my_putstr("[def: 100]\n");
}

void h_flag(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        print_h_flag();
    }
}
