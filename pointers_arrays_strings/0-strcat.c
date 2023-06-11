#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcat - concatenates two strings
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i_d = 0, index = 0;

	while (dest[i_d])
		i_d++;
	while (src[index])
	{
		dest[i_d++] = src[index++];
	}
	return (dest);
}
