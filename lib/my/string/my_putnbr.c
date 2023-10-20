/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** my_putnbr
*/

#include "my_string.h"

void my_putnbr(int nb)
{
    long nb_l = nb;

    if (nb_l < 0) {
        my_putchar('-');
        nb_l = nb_l * (-1);
    }
    if (nb_l / 10) {
        my_putnbr(nb_l / 10);
    }
    my_putchar((nb_l % 10) + '0');
}
