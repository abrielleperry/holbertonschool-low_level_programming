#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: value difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
