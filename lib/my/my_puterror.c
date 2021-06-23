/*
** EPITECH PROJECT, 2021
** my_puterror.c
** File description:
** write errors on the error output
*/

#include <unistd.h>

int my_puterr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i++;
    }
    return (0);
}

