#include "main.h"
#include <stdio.h>
#include <stdlib>
/* more headers go here */

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		k = (n - i - 1);
		for (j = 0; j < n; j++)
		{
			if (j < k)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
