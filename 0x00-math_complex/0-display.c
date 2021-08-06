#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers.
 * @c: complex number
 * Return: Always 0.
 */
void display_complex_number(complex c)
{
	if (c.re && c.im)
	{
		if (c.re < 0)
		{
			printf("-%g + %gi\n", c.re, c.im);
		}
		if (c.im < 0)
		{
			printf("%g - %gi\n", c.re, c.im);
		}
		printf("%g + %gi\n", c.re, c.im);
	}
	else if (c.re && !c.im)
	{
		printf("%g\n", c.re);
	}
	else if (!c.re && c.im)
	{
		printf("%gi\n", c.im);
	}
}
