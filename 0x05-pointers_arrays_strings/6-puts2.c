#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str:pointer char.
 * return:void
 */
void puts2(char *str)
{
	int i, x;
i = 0;
x = 0;

	while (str[i++])
	{
		x++;
	}
for (i = 0; i < x; i += 2)
{
	_putchar(*(str + i));
}
_putchar('\n');
}
