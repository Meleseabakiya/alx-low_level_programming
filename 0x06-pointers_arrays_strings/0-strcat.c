#include "main.h"

/**
 * _strcar - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest@: string that will be appended
 * @stc: string to be concatenated upon
 *
 * Return: return poiner to @dest
 */
char *_strcar(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
