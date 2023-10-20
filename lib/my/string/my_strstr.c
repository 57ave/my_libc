/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** strstr
*/

#include "stdlib.h"

static int get_indice_of_string(char *str, char const *cmp)
{
    int i = 0;
    int j = 0;

    for (; str[i] != cmp[0]; i++) {
        if (str[i + 1] == '\0') {
            return -1;
        }
    }
    for (; str[i] == cmp[j]; j++) {
        i++;
    }
    if (cmp[j] != '\0') {
        return -1;
    }
    return i - j;
}

char *my_strstr(char *str, char const *to_find)
{
    int indice = get_indice_of_string(str, to_find);

    if (to_find[0] == '\0') {
        return str;
    }
    if (indice < 0) {
        return NULL;
    }
    *str = *str + indice;
    return str;
}
