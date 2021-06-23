/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Displays an int.
*/

void my_putchar(char c);
int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return (0);
}
