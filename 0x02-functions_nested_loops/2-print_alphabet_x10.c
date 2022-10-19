#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
int spiro = 48;
int mor = '\n';
while (spiro < 58)
{
int ally = 97;
int pull = 122;
while (ally <= pull)
{
putchar(ally);
ally++;
}
spiro++;
putchar(mor);
}
}
