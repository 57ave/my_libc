/*
** EPITECH PROJECT, 2023
** day08
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        write(1, "\n", 1);
    }
    return 0;
}
