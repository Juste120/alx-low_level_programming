#include<stdio.h>
/**
 * main - Entry point of the program,prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success) to indicate the program ended correctly
 */
int main(void)
{
	char c;
	
	/* code to implement alphabet in lowercase*/
	
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/* code to implement alphabet in uppercase*/

	c = 'A';

       	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
