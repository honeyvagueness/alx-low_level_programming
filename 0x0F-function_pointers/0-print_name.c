#include "function_pointers.h"

/**
 * @f - function to print with
 * name - the name
 * print_name - prints the name
 *
 */
void print_name(char *name, void (*f)(char *)) 


{

   if (name && f)
   f(name);
}
