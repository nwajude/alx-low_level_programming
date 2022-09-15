#include "main.h"

/**
 *  * _isupper - A function that checks for uppercase character.
 *   * @c: An input character
 *    * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';

	while (uppercase <= 'Z')
	{
		if (c == uppercase)
			return (1);
		uppercase++;
		}

		return (0);
}
