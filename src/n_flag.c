/*
** EPITECH PROJECT, 2021
** n_flag.c
** File description:
** -n handling
*/

#include "palindrome.h"

int print_n(char **av, int res, int count)
{
    my_put_nbr(my_getnbr(av[2]));
    my_putstr(" leads to ");
    my_put_nbr(res);
    my_putstr(" in ");
    my_put_nbr(count);
    my_putstr(" iteration(s) in base 10\n");
}

int n_flag(char **av)
{
    int n = my_getnbr(av[2]);
    int res = 0;
    int temp_n = n;
    int count = 0;

    if (n < 0)
        return 84;
    while (is_palindrome(temp_n) == NOT_PALINDROME) {
        res = reverse_int(temp_n) + temp_n;
        temp_n = res;
        count += 1;
        if (is_palindrome(res) == PALINDROME) {
            print_n(av, res, count);
            break;
        }
    }
    return 0;
}
