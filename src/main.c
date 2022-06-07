/*
** EPITECH PROJECT, 2022
** n4s_package
** File description:
** main
*/

#include "../includes/include.h"

char *float_to_string(float a)
{
    char *s = malloc(sizeof(char) * 4);
    gcvt(a, 3, s);
    return (s);
}

void set_speed(char **ct)
{
    float distance = atof(ct[16]);
    float speed = (distance * 1.0 / 1400.0);
    if (distance > 1400) speed = 1.0;
    if (distance < 100) speed = 0;
    mputs("CAR_FORWARD:", 0);
    mputs(float_to_string(speed), 1);
}

void set_wheels_dir(char **ct)
{
    float distance = atof(ct[16]);
    float dir = 0.0;

    (distance >= 100 ? dir = 0.7 : 0);
    (distance >= 200 ? dir = 0.3 : 0);
    (distance >= 400 ? dir = 0.2 : 0);
    (distance >= 600 ? dir = 0.1 : 0);
    (distance >= 800 ? dir = 0.05 : 0);

    (atof(ct[1]) - atof(ct[32]) < 0.0 ? dir *= -1 : 0);
    mputs("WHEELS_DIR:", 0);
    mputs(float_to_string(dir), 1);
}

void run_simulation(void)
{
    int end = 0;
    mputs("START_SIMULATION", 1);
    mgetline();

    while (1) {
        mputs("GET_INFO_LIDAR", 1);
        char **ct = my_str_to_word_array(mgetline(), ':');
        for (int i = 0; ct[i]; i++)
            (!strcmp(ct[i], "Track Cleared") ? end = 1 : 0);
        if (end == 1)
            break;
        set_speed(ct);
        mgetline();*
        set_wheels_dir(ct);
        mgetline();
    }

    mputs("STOP_SIMULATION", 1);
}

int main(void)
{
    run_simulation();
    return (0);
}
