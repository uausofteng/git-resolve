#include <stdio.h>

/**
 * _putchar - write a character c to stdout
 * @c: char to be printed
 * Return: on success
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
