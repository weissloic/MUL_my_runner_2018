/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;
    if (str != NULL) {
        while (str[i] != '\0') {
            i++;
        }
    }
    return (i);
}
