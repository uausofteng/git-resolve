#include "main.h"

/**
* _strcmp - compares pointers to two strings.
* @s1: Apoinetr to the first string to be copared.
* @s2: Apoinetr to the second string to be copared.
*
* Return: If str1 < str2, the negative difference of the unmatched char
*         If str1 == str2, 0,
*	  If str1 > str2, the positive difference of the unmatched char
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
