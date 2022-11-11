#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print
 *
 * Return: On success 1
i */
int (char c)
{
	return (write(1, &c, 1));
}
