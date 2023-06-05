#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - swaps value of two integers
 * @a: first integer
 * @b: second integer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
