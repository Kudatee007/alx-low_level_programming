#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: A string containing format specifiers for the arguments.
 *          'c' for char, 'i' for integer, 'f' for float, 's' for string.
 *          Any other character is ignored.
 * @...: Variable number of arguments corresponding to the format string.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, str);
					}
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
