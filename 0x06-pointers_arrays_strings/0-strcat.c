#include "main.h"

/**
 * _strcar - concatenates two string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcar(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
