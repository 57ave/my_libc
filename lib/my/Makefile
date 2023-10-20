##
## EPITECH PROJECT, 2023
## makefile
## File description:
## lib
##

NAME =	libmy.a

CC = gcc

CPPFLAGS += -iquote "include"

CFLAGS = -Wall -Wextra

STRING = 	string/my_strstr.c \
			string/my_strcmp.c 	\
			string/my_strncmp.c 	\
			string/my_strcat.c 	\
			string/my_strncat.c 	\
			string/my_strcpy.c 	\
			string/my_strncpy.c 	\
			string/my_revstr.c 	\
			string/my_strlowcase.c \
			string/my_strupcase.c 	\
			string/my_strlen.c 	\
			string/my_putnbr.c 	\
			string/my_getnbr.c 	\
			string/my_putstr.c 	\

MATH =	math/my_compute_power_rec.c\
		math/my_compute_square_root.c\
		math/my_find_prime_sup.c\
		math/my_isneg.c\
		math/my_is_prime.c\
		math/my_sort_int_array.c\
		math/my_swap.c\

SRC = $(STRING) 	\
	  $(MATH)

OBJ = 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc -o $(NAME) $(OBJ)
	cp libmy.a ../libmy.a

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

debug: CFLAGS += -ggdb3
debug: fclean all

re: fclean all clean

.PHONY: all clean fclean re debug
