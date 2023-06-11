#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function copies in bytes
 * @dest: area where bytes are copies to
 * @src: area where bytes are copies from
 * @n: number of bytes to copy
 * Return: nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
