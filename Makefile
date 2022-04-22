##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Compile
##
SRC	=	$(shell find sources/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

TEST	=	sources/my_strlen.c		\
		tests/test_my_strlen.c

TNAME	=	./unit_tests

all:    $(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(OBJ) -lm -lncurses -g3

tests_run:	$(TEST)
		@gcc -o $(TNAME) $(TEST) -lcriterion --coverage
		./unit_tests

clean:
		@rm -f $(OBJ)
		@rm -f tests/*~
		@rm -f *.gc*
		@rm -f *~

fclean:		clean
		@rm -f $(NAME)
		@rm -f $(TNAME)

re: fclean all
