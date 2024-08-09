#include <stdio.h>

main(void)
{
int fahr, celsius;
int lower, upper, step;
int klz;


printf("Input your lower:");
scanf("%i", &lower);
printf("lower = %i\r\n", lower );
printf("\r\n");


printf("Input your upper:");
scanf("%i", &upper);

printf("upper = %i\r\n", upper);
printf("\r\n");

step = 5;

fahr = lower;

printf("\r\n");
while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9;
printf("%d\t%d\n", fahr, celsius);
fahr = fahr + step;
}

printf("Input region of klz");
scanf("%i", klz);
}
