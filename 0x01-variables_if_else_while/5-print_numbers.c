#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char d = '0';

while (d <= '9')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
