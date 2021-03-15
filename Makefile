##
## EPITECH PROJECT, 2019
## tetris
## File description:
## Makefile of the tris
##

SRC		=	src/main.c	\
			src/get_infos.c	\
			src/sort_list.c	\
			src/get_file.c	\
			src/tools.c	\
			src/analyse.c	\
			src/display.c	\
			src/args_manage.c	\
			src/help.c	\
			src/check_and_set.c	\
			src/flags_management.c	\

SRC_TEST	=	tests/tests_of_tetris.c \
			tests/main_for_tests.c	\
			src/get_infos.c	\
			src/sort_list.c	\
			src/get_file.c	\
			src/tools.c	\
			src/analyse.c	\
			src/display.c	\
			src/args_manage.c	\
			src/help.c	\
			src/check_and_set.c	\
			src/flags_management.c	\

OBJ		=	$(SRC:.c=.o)

OBJ_TEST	=	$(SRC_TEST:.c=.o)

CFLAGS		=	-Wextra

CPPFLAGS	=	-I./include/

LIB		=	-L./lib/my/ -lmy -lncurses

NAME		=	tetris

NAME_TEST	=	unit_tests

CC		=	gcc

RM		=	rm -f

all:		lib $(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LIB)

clean:
		$(RM) $(OBJ)

fclean:	clean lib_clean
	$(RM) $(NAME)

re:		fclean all

debug:	CFLAGS += -g3
debug:	re

lib:
		@make --no-print-directory re -C ./lib
		@make --no-print-directory clean -C ./lib

lib_clean:
		@make --no-print-directory fclean -C ./lib

tests_run: lib $(OBJ)
		$(CC) $(CPPFLAGS) -o $(NAME_TEST) $(SRC_TEST) $(LIB) --coverage -lcriterion
		./$(NAME_TEST)

rm_test:	fclean
		$(RM) $(NAME_TEST)
		$(RM) *.gcda
		$(RM) *.gcno

all_clean: fclean rm_test

.PHONY:		all clean fclean re lib lib_clean tests_run rm_test
