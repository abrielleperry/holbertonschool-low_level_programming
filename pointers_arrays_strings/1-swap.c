#include "main.h"
#include <stdio.h>

/**
 * swap - swaps value of to integers
 * @a: first integer
 * @b: second integer
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
