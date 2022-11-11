#include "main.h"

/**
* _strcat - concatenates the sring pointed to by@src, including the terminat
*    null byte, totheend of string pointed to by@dest.
* @dest: pointer to string to be concatenated upon.
* @src: the source string to appended to @dest
* Return: a pointer to the destination @dest
*/
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
