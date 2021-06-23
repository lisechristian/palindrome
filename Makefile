##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Palindrome
##

SRC	=	src/main.c\
		src/h_flag.c\
		src/n_flag.c\
		src/p_flag.c\
		src/palindrome.c\
		src/reverse_int.c\
		src/get_flags.c

OBJ	=	$(SRC:.c=.o)

NAME	=	palindrome

CFLAGS =        -I ./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) -L ./lib/my -lmy

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
