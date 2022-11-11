#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area pointed
 * 	to by @src into that pointed to by @dest
 * 	@dest: A pointer to the memory area to @src into
 * @src: The source buffer to characters from.
 * @n: the number to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
