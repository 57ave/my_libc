/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** sort_in_array
*/

#include "my_math.h"
#include "macro.h"

int check_int(int *array, int size)
{
    for (int i = 0; i + 1 < size; i++) {
        if (array[i] > array[i + 1]) {
            return i;
        }
    }
    return EXIT_ERROR;
}

void my_sort_int_array(int *array, int size)
{
    int i_swap = check_int(array, size);

    for (int i = 0; i_swap >= 0; i++) {
        i_swap = check_int(array, size);
        if (i_swap < 0) {
            continue;
        }
        my_swap(&array[i_swap], &array[i_swap + 1]);
    }
}
