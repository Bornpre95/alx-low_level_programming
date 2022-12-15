#include "main.h"

/**
 * main-  tests function that prints if integer is positive or negative
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	i = 98;

	if (i > 0)

	{
		printf("%d is positive\n", i);

	}

	else if (i < 0)

	{
		printf("%d is negative\n", i );

	}


	else if (i == 0)


	{
		printf("%d is 0\n", i);

	}


	return (0);

}
