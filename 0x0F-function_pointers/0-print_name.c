#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - A function that prints a name.
 *
 * @name: name of the person.
 * @f: A function pointer to a function that takes
 *     a char pointer argument.
 *
 * Description: This function takes a name and a function
 *              pointer as argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
