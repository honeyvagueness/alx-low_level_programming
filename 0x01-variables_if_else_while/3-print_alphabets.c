#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char alphabet = 'a';

char loba = 'A';

char tyo = '\n';

while (alphabet <= 'z')

{

putchar(alphabet);

alphabet++;

}

while (loba <= 'Z')

{

putchar(loba);

loba++;

}

putchar(tyo);

return (0);

}
