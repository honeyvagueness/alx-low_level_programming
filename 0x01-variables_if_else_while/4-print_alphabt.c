#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char alphabet = 'a';

char tyo = '\n';

while (alphabet <= 'z')

{

if (alphabet != 'e' && alphabet != 'q')

{

putchar(alphabet);

}

alphabet++;

}

putchar(tyo);

return (0);

}
