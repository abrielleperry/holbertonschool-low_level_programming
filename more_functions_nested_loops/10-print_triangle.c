#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers go here */

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		k = (size - i - 1);
		for (j = 0; j < size; j++)
		{
			if (j < k)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
