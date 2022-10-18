#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0) always
 */
int main(void)
{
unsigned long int lim = 4000000;
unsigned long int befere = 0;
unsigned long int after = 1;
unsigned long int x = 0;
unsigned long int sum = 0;

while (lim > x)
{
x = before + after;
if ((x % 2) == 0)
{
sum += x;
}
before = after;
after = x;
}
printf("%li\n", sum);
return (0);
}
