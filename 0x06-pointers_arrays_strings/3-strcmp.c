#include "main.h"

/**
 * _strcmp - function which compar two string and
 * @s1: first string
 * @s2: second string
 * Return:
 * return zero if s1 == s2
 * return negative number if s1 < s2
 * return positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)

{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
		}
		else
			i++;
	}
	return (diff);
}


