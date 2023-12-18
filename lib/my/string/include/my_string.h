/*
** EPITECH PROJECT, 2023
** my_libc
** File description:
** my_string.h
*/

#include <stddef.h>

#ifndef MY_STRING_H
    #define MY_STRING_H

    #define TO_UPPER -32

char *my_strstr(char *src, char const *to_find);

void *my_memcpy(void *dest, void *src, size_t new_size, size_t old_size);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int n);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strlowcase(char *str);

char *my_strupcase(char *str);

size_t my_strlen(char const *str);

void my_putnbr(int nb);

void my_putchar(char c);

void my_putstr(char const *str);

int my_getnbr(char *str);

#endif
