#include "main.h"
/**
* _isupper - Check if the given character is an uppercase letter.
* @c: Character to be tested
*
* Return: 1 if uppercase else 0 (False)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
