##
## EPITECH PROJECT, 2023
## string
## File description:
## Makefile
##

NAME =	libstr.a

INCLUDE =	include/my_string.h

CPPFLAGS += -iquote "../include"

CFLAGS = -Wall -Wextra

RM = rm -f

SRC = 	my_strstr.c \
			my_strcmp.c 	\
			my_strncmp.c 	\
			my_strcat.c 	\
			my_strncat.c 	\
			my_strcpy.c 	\
			my_strncpy.c 	\
			my_revstr.c 	\
			my_strlowcase.c \
			my_strupcase.c 	\
			my_strlen.c 	\
			my_putnbr.c 	\
			my_getnbr.c 	\
			my_putstr.c 	\
			my_memcpy.c 	\

OBJ = 	$(SRC:.c=.o)

INCLUDE_OBJ = ../$(INCLUDE)

clean:
	$(RM) $(OBJ)

all: $(NAME)

$(NAME): $(OBJ)
	cp -r $(INCLUDE) $(INCLUDE_OBJ)
	ar rc -o $(NAME) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

debug: CFLAGS += -ggdb3
debug: fclean all

re: fclean all

.PHONY: all clean fclean re debug
