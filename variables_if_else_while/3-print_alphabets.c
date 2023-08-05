#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0
 */
int main(void)
{
	char n;
	char e;

	n = 'a';
	e = 'A';

	while (n <= 'z')
	{
		putchar(n);
	       	n++;
	}
	while (e <= 'Z')
	{
		putchar(e); 
		e++;
	}
	putchar('\n');
	return (0);
}
