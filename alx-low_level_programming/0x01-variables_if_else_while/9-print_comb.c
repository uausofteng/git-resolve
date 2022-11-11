#include <stdio.h>
/**
 * main - Print a comma-separated list of numbers from 0 to 9
void main(void)
{
	int i;
	clrscr();
	printf("Print a comma-separated list of numbers from 0 to 9 :\n");
	for (i = 0; i <= 9; i++) {
		printf("%d", i);
		if (i < 10)
			printf(", ");
		}
	printf("\n");
	getch();
}
