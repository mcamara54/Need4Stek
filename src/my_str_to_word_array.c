/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCY-1-1-BSQ-romain.bolze
** File description:
** my_str_to_word_array
*/

#include "../includes/include.h"

void strcp_wrodarray(char **str2d, char const *str, char const limiter)
{
    int e = 0;
    int j = 0;
    for (int i = 19; str[i] != '\0'; i++) {
        if (str[i] != limiter && str[i] != '\t' && str[i] != '\n') {
            str2d[e][j] = str[i];
            str2d[e][j + 1] = '\0';
            j++;
        }
        if ((str[i] == limiter && str[i + 1] != limiter && str[i + 1] != '\t'
        && str[i + 1] != '\n') || (str[i] == '\t' && str[i + 1] != limiter &&
        str[i + 1] != '\t' && str[i + 1] != '\n')) {
            e++;
            j = 0;
        }
        if (str[i + 1] == '\0') {
            str2d[e + 1] = NULL;
            j = 0;
        }
    }
}

int count_word(char const *str, char limiter)
{
    int wordnb = 0;

    for (int i = 19; str[i] != '\0'; i++) {
        if ((str[i] == limiter && str[i + 1] != limiter
        && str[i + 1] != '\t' && str[i + 1] != '\n') || str[i + 1] == '\0')
            wordnb++;
    }
    return (wordnb);
}

char **my_str_to_word_array(char const *str, char const limiter)
{
    char **str2d = NULL;
    int wordnb = 1;
    int e = 0;
    int caract = 0;

    wordnb = count_word(str, limiter);
    str2d = (char **)malloc(sizeof(char *) * (wordnb + 1));
    for (int y = 19; str[y] != '\0'; y++) {
        caract++;
        if ((str[y] == limiter && str[y + 1] != limiter
        && str[y + 1] != '\t') || str[y + 1] == '\0') {
            str2d[e] = malloc(sizeof(char) * (caract + 100));
            str2d[e + 1] = NULL;
            e++;
            caract = 0;
        }
    }
    strcp_wrodarray(str2d, str, limiter);
    return (str2d);
}
