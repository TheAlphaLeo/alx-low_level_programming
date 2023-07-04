#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @str: starting address of memory to be filled
 * @ch: the desired character
 * @len: number of characters to be changed
 *
 * Return: pointer to the modified string
 */
char *_memset(char *str, char ch, unsigned int len)
{
	int i = 0;

	for (; len > 0; i++)
	{
		str[i] = ch;
		len--;
	}
	return (str);
}
