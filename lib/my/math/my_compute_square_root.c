/*
** EPITECH PROJECT, 2023
** day05
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    for (int i = 1; i <= nb; i++) {
        if (i * i == nb) {
            return i;
        }
    }
    return 0;
}
