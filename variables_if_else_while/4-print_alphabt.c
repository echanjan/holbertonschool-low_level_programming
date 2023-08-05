#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:0
 */
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
		if ((n != 'e' && n != 'q') && n <= 'z')
			putchar (n);
		n++;
	}
	return (0);
}
