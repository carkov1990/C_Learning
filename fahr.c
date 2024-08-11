#include <stdio.h>
main(int argc, int lower, int upper, int klz, char *argv[])
{
printf("Input your lower:");
scanf("%i", &lower);

printf("Input you upper:");
scanf("%i", &upper);

    {
        int fahr, step;

    for(fahr = lower; fahr <= 300; fahr = 5)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }


printf("Press number 1 and Enter");
scanf("%i", &klz);
}



