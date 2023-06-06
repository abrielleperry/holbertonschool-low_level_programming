#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array integers
 * @a: array name
 * @n: number of times to print in array
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < <n - 1))
			printf(", ");
	}
	printf("\n");
}
