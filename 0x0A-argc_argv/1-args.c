#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passe to it
 * @argc: number of arguments
 * @argv: array of strings containing arguments and program name
 * Return: an int
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
