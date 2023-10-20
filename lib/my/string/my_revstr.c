/*
** EPITECH PROJECT, 2023
** day04
** File description:
** task04
*/

#include <stddef.h>
#include "my_string.h"

char *my_revstr(char *str)
{
    size_t size = my_strlen(str);
    char tmp_str[size];
    int i = 0;

    for (; str[i] != '\0'; i++) {
        tmp_str[i] = str[i];
    }
    tmp_str[size] = '\0';
    for (int j = 0; str[j] != '\0'; size--) {
        str[j] = tmp_str[size - 1];
        j++;
    }
    return str;
}
