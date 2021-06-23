/*
** EPITECH PROJECT, 2021
** palindrome.c
** File description:
** verify palindrome
*/

#include "palindrome.h"

int is_palindrome(int n)
{
    int reverse = reverse_int(n);

    if (n == reverse)
        return (PALINDROME);
    else
        return (NOT_PALINDROME);
}
