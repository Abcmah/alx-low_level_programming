#include "main.h"

/**
 *print_alphabet_x10 - Prints x10 alphabets
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;


c = 0;
while (c < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

c++;
_putchar('\n');
}
}
