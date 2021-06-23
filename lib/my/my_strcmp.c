/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** compare two strings and return 0 if they're the same
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && s1[i] && s2[i])
    {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
