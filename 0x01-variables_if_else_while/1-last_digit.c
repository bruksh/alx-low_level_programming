#include <stdlibb.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Task 1 print the last digit of the numberstoredin the variable n
 *
 * Return: Always 0
 **/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MIX / 2;
printf("Last digit of %d is", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 6 && != 0
{
printf("less than 6 and not 0");
}

printf("\n");

return (0);
}
