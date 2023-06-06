#include "main.h"
#include <stdio.h>

/**
 * _atoi - finds integers inside a string
 * @str: string to find integer
 * Return: returns integer
 */

int _atoi(char *str)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*str == '-')
			sign *= -1;

		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');

		else if (num > 0)
			break;
	} while (*str++);


	return (num * sign);
}
