/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** strlowcase
*/

#include "my_string.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ( 'A' <= str[i] && str[i] <= 'Z') {
            str[i] = str[i] - TO_UPPER;
        }
    }
    return str;
}
