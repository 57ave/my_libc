/*
** EPITECH PROJECT, 2023
** day05
** File description:
** task 06
*/

int my_find_prime_sup(int nb)
{
    for (int i = 2; i < nb; i++) {
        if (i * i == nb) {
            return my_find_prime_sup(nb + 1);
        }
    }
    return nb;
}
