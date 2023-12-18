##
## EPITECH PROJECT, 2023
## makefile
## File description:
## toml
##

NAME =	libtoml.a

CC = gcc

CPPFLAGS += -iquote "../include"

CFLAGS = -Wall -Wextra

LD_PATH = ../../libtoml.a

SRC =	src/get_data.c 	\
		src/get_objects.c 	\
		src/open_toml.c \
		src/pull_data.c \

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc -o $(NAME) $(OBJ)
	cp $(NAME) $(LD_PATH)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LD_PATH)


debug: CFLAGS += -ggdb3
debug: all

re: fclean
re: all

.PHONY: all clean fclean re debug
