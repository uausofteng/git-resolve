#include "main.h"

/**
* print_last_digit - main function print_last_digit
* Description: Main function of the program to print_last_digit
* @n: the number
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
