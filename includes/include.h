/*
** EPITECH PROJECT, 2022
** my_hunter_opti
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <time.h>
    #include <dirent.h>
    #include <getopt.h>
    #include <math.h>

char *get_next_line(void);

void mputs(char const *str, int i);

char **my_str_to_word_array(char const *str, char const limiter);

int matoi(char const *a);

int misnum(char *s);

char *mstrcpy(char *a, char const *b);

int mstrlen(char const *s);

#endif /* !INCLUDE_H_ */
