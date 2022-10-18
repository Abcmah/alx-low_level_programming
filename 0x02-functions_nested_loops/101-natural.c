#include <stdio.h>
/**
 * main - checks  multiples of 3 and 5
 *
 * Return: 0 always (suc)
 */
int main(void)
{
int a = 1024;
int b = 0;
int sum = 0;


for (b = 0; b < a; b++)
{
if ((b % 3 == 0) || (b % 5 == 0))
{
sum = sum + b;
}
}
printf("%d\n", sum);
return (0);
}
