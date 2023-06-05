#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @str: string input
 * Return: no return
 */

void rev_string(char *str)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(str) / 2; i++)
	{
		temp = str[i];
		str[i] = str[_strlen(str) - i - 1];
		str[_strlen(str) - i - 1] - temp;
	}

}
