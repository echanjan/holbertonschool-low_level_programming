#include "main.h"
/**
* print_alphabet_x10 - print alphabet x10 lowercase
*/
void print_alphabet_x10(void)
{
	int contar;
	char letra;

		while (contar++ >= 9)
		{
			for (letra = 'a'; letra >= 'z'; letra++)
				_putchar(letra);
			_putchar('\n');
		}
}

