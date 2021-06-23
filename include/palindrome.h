/*
** EPITECH PROJECT, 2020
** palindrome.h
** File description:
** Prototypes
*/

#ifndef MY_H_
#define MY_H_

//Lib
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_puterr(char const *str);
int my_strcmp(char *s1, char *s2);

//struct
typedef enum type_e {
    PALINDROME = 0,
    NOT_PALINDROME,
} type_t;


//src
int get_flags(int ac, char **av);
void h_flag(int ac, char **av);
int  n_flag(char **av);
int  p_flag(char **av);
int is_palindrome(int n);
int reverse_int(int n);    
#endif
