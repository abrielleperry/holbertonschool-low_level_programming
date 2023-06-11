#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes first char of word
 * @s: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	int z = 1;
	char *answer = s;
	char *spesh = " \t\n;,.!?\"(){}\0";

	while (*s)
	{
		if (z)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			z = 0;
		}
		for (i = 0; spesh[i]; i++)
		{
			if (*s == spesh[i])
				z = 1;
		}
		s++;
	}
	return (answer);
}
