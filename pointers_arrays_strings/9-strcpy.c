#include "main.h"
#include <stdio.h>

/**
 * strcpy - copies the string
 * @dest: final location
 * @src: string copy
 * Return: no return
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
