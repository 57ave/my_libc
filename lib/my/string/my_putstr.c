/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** putstr
*/

#include "my_string.h"
#include <unistd.h>

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
