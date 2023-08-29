#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: Double pointer to a string.
 * @to: Pointer to the new string.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
