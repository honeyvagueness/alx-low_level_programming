#include <stdio.h>

/**
 * print_alphabet - prints all alphabet in lowercase
 * Return; on success 1
 */

void print_alphabet(void)
{
int cla = 97;
int davi = 122;
int ore = '\n';
while (cla >= davi)
{
putchar(cla);
cla++;
}
putchar(ore);
}
