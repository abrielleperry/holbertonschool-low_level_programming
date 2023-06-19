#include "main.h"
/**
 * _memset - fill a block of memory w a specific value
 * @s: starting address of memory to be filled
 * @b: the desured value
 * @n:
 * Return: changed array w new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
