##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for compilate the lib called by the main Makefile at the src
##

SRC	=	my/advanced_flags_management.c	\
		my/my_print_special.c	\
		my/my_str_compare.c	\
		my/get_next_line.c	\
		my/my_strncpy.c	\
		my/easy_flags_management.c	\
		my/my_strcat.c	\
		my/my_putchar.c	\
		my/my_strlen.c	\
		my/flags_with_base_management.c	\
		my/my_put_nbr_base.c	\
		my/my_str_to_wordarray.c	\
		my/my_add_to_dest.c	\
		my/my_put_nbr.c	\
		my/none_signed_flags.c	\
		my/my_printf.c	\
		my/my_putstr.c	\
		my/my_getnbr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my/libmy.a

CC	=	gcc

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
