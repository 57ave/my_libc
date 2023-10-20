/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** my_strlen
*/

#include <stddef.h>

size_t my_strlen(char const *str)
{
    size_t indice = 0;

    while (str[indice] != '\0') {
        indice++;
    }
    return indice;
}
