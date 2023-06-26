#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into main
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
