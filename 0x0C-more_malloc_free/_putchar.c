#include<unistd.h>

/**
* _putchar - prints a character
* @c: the chracter to print
*
* Return: 0 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
