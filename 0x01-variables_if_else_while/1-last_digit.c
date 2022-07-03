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
char last[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MIX / 2;
/*your code goes there*/
printf("%s %d is %d and ", last, n, n % 10);
if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
