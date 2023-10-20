/*
** EPITECH PROJECT, 2023
** day03
** File description:
** task04
*/

#include "my_string.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
