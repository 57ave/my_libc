/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; src[i] != '\0'; i++) {
        if (i == n) {
            break;
        }
        dest[i] = src[i];
    }
    if (i < n) {
        dest[i] = src[i];
    }
    return dest;
}
