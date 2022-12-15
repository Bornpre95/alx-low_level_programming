#include "main.h"

/**
 *   print_sign - prints the sign of a number
 * @n: single character
 *    *Return: 1 if n > 0, -1 if n < 0 and 0 if n = 0.
 */


  int print_sign(int r)

{

	if (r > 0)

	{
	       	_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{

		_putchar('-');
		return (-1);
	}

}

