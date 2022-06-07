/*
** EPITECH PROJECT, 2022
** B-CPE-200-NCY-2-1-lemin-romain.bolze
** File description:
** isnum
*/

#include "../includes/include.h"

int misnum(char *s)
{
    for (int i = 0; s[i] != '.'; i++) {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '.')
            return (1);
    }
    return (0);
}
