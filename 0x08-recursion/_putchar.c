#include <unistd.h>
#include "main.h"

/* _putchar - writes a character to the standard output */
void _putchar(char c)
{
    write(1, &c, 1);
}
