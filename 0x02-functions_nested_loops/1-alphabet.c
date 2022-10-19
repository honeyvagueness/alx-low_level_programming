#include <stdio.h>

/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
int all = 97;
int pall = 122;
int mart = '\n';
while (all <= pall)
{
putchar(all);
all++;
}
putchar(mart);
}
