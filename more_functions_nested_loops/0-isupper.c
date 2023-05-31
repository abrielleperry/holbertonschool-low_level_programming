#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes here */

/**
 * _isupper - Checks if the character is lowercase
 *
 * @C: - the input letter or number
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 **/

int _isupper(int c)
{
	int l = c;
	int i;
	int r = 0;

	for (i = 65 ; i < 91; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}
