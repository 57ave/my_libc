/*
** EPITECH PROJECT, 2023
** day05
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    for (int i = 2; i < nb; i++) {
        if (i * i == nb) {
            return 0;
        }
    }
    return 1;
}
