#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two nums
 * @a: first pointer
 * @b: second pointer
 * Return: void or nothing
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
