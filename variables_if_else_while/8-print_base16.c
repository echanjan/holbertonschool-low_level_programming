#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int n;
	char l;

	l = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
