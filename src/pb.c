#include <stdio.h>
#include <stdlib.h>

int calculate_result(int white_balls[5], int power_ball)
{
    return null;
}

int main(int argc, char** argv)
{
    if (argc != 7)
    {
        fprintf(stderr, "Usage: %s power_ball (5 white balls)\n", argv[0]);
        return -1;
    }

    int power_ball = atoi(argv[1]);

    int white_balls[5];
    for (int i=0; i<5; i++)
    {
        white_balls[i] = atoi(argv[2+i]);
    }

    int result = calculate_result(white_balls, power_ball);

    printf("%d percent chance of winning\n", result);

    return 0;
}

irgendwas
iwas
<<<<<<< HEAD
asdd
=======

Kommentar 27.10.2014 8:49
>>>>>>> df5c65a5a5181c539c1388288aa2e8e18ea0cc92
#define.
asdasdasdasd
wwwww
