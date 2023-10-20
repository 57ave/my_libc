/*
** EPITECH PROJECT, 2023
** day04
** File description:
** task01
*/

void my_swap(int *a, int *b)
{
    int valeur_a = *a;
    int valeur_b = *b;

    *a = valeur_b;
    *b = valeur_a;
}
