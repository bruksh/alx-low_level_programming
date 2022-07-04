#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Returns: Always 0.
 */
int main(void)
{
char d = 'a';


while (d <= 'z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
