#include <stdio.h>
#include "main.h"

/**
 * _strchr - returns a pointer to first occurence
 * @s: string targeted
 * @c: character targeted
 * Return: returns pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
