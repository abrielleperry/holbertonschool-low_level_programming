#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes first char of word
 * @s: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, x = 0;

	while (s[i])
	{
		if (x == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
			x = 1;
		}

		if (s[i] < 65 || (s[i] > 90 && s[i] < 97 || s[i] > 122)
			x = 0;
		}

		if ((s[i] > 64 && s[i] < 91 || (s[i] > 47 && s[i] < 58) || s[i] == 45)
		x = 1;

		i++;
	}
	
	return (s);
}
