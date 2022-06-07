/*
** EPITECH PROJECT, 2022
** B-PSU-101-NCY-1-1-minishell1-romain.bolze
** File description:
** get_next_line
*/

#include "../includes/include.h"

char *get_next_line(void)
{
    char *line = NULL;
    size_t len = 0;

    if (getline(&line, &len, stdin) == -1)
        return (NULL);
    return (line);
}
