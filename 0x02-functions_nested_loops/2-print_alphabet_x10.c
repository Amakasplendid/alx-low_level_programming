#include "main.h"

/**
 * print_alphabet_x10 - alphabets in 10 places
 * Return: void
 */

void print_alphabet_x10(void)
{

char p;
int a;
a = 0;
while (a < 10)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
a++;
}

}
