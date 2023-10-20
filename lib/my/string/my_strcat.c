/*
** EPITECH PROJECT, 2023
** day07
** File description:
** strcat
*/

#include "my_string.h"
#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    size_t len = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
