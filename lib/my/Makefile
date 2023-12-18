##
## EPITECH PROJECT, 2023
## makefile
## File description:
## lib
##

all:
	make -C string/
	make -C my_toml/
	make -C stdlib/
	make -C bin_tree/

clean:
	make -C string/ clean
	make -C my_toml/ clean
	make -C stdlib/ clean
	make -C bin_tree/ clean

fclean:
		make -C string/ fclean
		make -C my_toml/ fclean
		make -C stdlib/ fclean
		make -C bin_tree/ fclean

debug:
		make -C string/ debug
		make -C my_toml/ debug
		make -C stdlib/ debug
		make -C bin_tree/ debug

re: fclean
re: all

.PHONY: all clean fclean re debug
