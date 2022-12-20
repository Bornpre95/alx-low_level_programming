#include "main.h"

/**
 * swap_int - function that swaps the value of wo integers
 * @a: first entry
 * @b: second entry
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = *a;

}
