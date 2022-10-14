#include "variadic_functions.h"

/**
 *print_numbers -  prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		return;

	int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	_putchar('\n');
}
