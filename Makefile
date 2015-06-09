##
## Makefile for  in /home/mart_4/rendu/CPE_2014_Pushswap
##
## Made by Thomas Martins
## Login   <mart_4@epitech.eu>
##
## Started on  Fri Dec 12 16:01:56 2014 Thomas Martins
## Last update Fri Dec 12 16:01:56 2014 Thomas Martins
##

SRC     = list_three.c \
	my_printf.c \
	operation.c \
	function_one.c \
	list_two.c \
	my_function.c \
	my_putnbr_base.c \
	printf_two.c \
	list.c \
	main.c \
	my_getnbr.c \
	my_putnbr_flag.c \
	error.c

OBJ	= $(SRC:.c=.o)

NAME	= push_swap

RM	= rm -f

all:	$(NAME)

$(NAME): $(OBJ)
	cc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
