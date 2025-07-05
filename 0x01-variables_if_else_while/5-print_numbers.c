#include<stdio.h>
/** 
 * main - Entry point of the program, prints the all numbers
 *
 * Return : Always 0 (Success) to indicate the program ended correctly
 */
int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
