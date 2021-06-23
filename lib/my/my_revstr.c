/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** Reverses a string
*/

#include <string.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char c;

    while (str[i] != '\0') {
         printf("i0 = %d\n", i);   
        i++;
    }
    printf("i1 = %d\n", i);
    i--;

    printf("i2 = %d\n", i);
    while(j <= i){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        j++;
        i--;
    }
    return(str);
}
