##
## EPITECH PROJECT, 2021
## header
## File description:
## header
##

SRC	=	$(shell find src -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

LIBDIR	=	./lib

LIB	=	my

INCLUDE	=	./includes

CFLAGS	=	-g -Wall -Wextra

BUILDDIR	=	.

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
