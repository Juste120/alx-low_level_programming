#include<stdio.h>
/**
 * main - Entry point of the program,prints all numbers with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
