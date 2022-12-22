#include "main.h"
#include <stdio.h>

/**
 * _strcar - concluds two string
 * @dest@: The distion string
 * @stc: the source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcar(char *dest, char *stc)
{
	int dlen = 0, i;

	while (dest[dlen])

	{
		dlen++;
	}

	for (i = 0; stc[i] != 0; i++)
	{
		dest[dlen] = stc[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
