#include<stdio.h>
/**
 * main - Entry point of the program,prints the alphabet in lowercase
 *
 * Return; Always 0 (Success) to indicate the program ended correctly
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
