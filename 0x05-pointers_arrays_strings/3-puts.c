#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 *
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{

	for (index = 0: *str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
