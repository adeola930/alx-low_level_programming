#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error
 * this file print exact file using write
 * Return: 1  (success)
 */
int main(void)
{
	fprintf(stderr, "and that piece of art is useful\" - Dora Korpar,");
	fprintf(stderr, " 2015-10-19\n");
	return (1);

}
