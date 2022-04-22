##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Create solostumper binary
##

SRC	=	$(shell find sources/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lm -lncurses -g3

clean:
		rm -f $(OBJ)
		rm -f *~

fclean: 	clean
		rm -f $(NAME)

re:		fclean all
