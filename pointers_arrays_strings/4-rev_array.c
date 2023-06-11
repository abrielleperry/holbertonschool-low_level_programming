#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: reversed array
 * @n: number of items in array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
