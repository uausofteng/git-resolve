#include "main.h"

/**
 * _measet-Fills the first n bytes of the menory area
 * pointed to by es with the constant byte
 * pointed to by es with the constant byte
 * @s: A pointer to the ory area to be filled
 * @c: The character to fill the menory area with
 * @n: The number of bytes to be filled.
 * Description _semset: over there
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
	memory[index] = value;

	return (memory);
}
