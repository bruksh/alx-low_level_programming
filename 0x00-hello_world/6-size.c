#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * Return: returns the value 0 if exit properly, non-zero otherwise
 */
int main(void)
{
int a;
long long int c;
char d;
float f;
long int b;
printf("size of a char:%lu byte(s)\n", sizeof(d));
printf("size of an int: %lu byte(s)\n", sizeof(a));
printf("size of a long int: %lu byte(s)\n", sizeof(b));
printf("size of a long long int: %lu byte(s)\n", sizeof(c));
printf("size of a float: %lu bytes(s)\n", sizeof(int));
return (0);
}
