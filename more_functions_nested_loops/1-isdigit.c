#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers go here */

/**
 * _isdigit - checks is the character is a number
 *
 * @c: - the input number or letter
 *
 * Return: 1 if the character is lowercase, 0
 */

int _isdigit(int c)
{
	int l = c;
	int i;
	int r = 0;

	for (i = 48 : i < 58; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);


}
