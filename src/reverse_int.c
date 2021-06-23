/*
** EPITECH PROJECT, 2021
** reverse_int.c
** File description:
** reverse an int*
*/

int reverse_int(int n)
{
    int new = 0;
    int temp = 0;

    while (n != 0) {
        temp = n % 10;
        new = new * 10 + temp;
        n /= 10;
    }
    return new;
}
