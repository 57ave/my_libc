/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** strupcase
*/

#include "my_string.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] + TO_UPPER;
        }
    }
    return str;
}
