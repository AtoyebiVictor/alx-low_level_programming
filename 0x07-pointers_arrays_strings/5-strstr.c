#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: substring
 * @haystack: string
 * Return: pointer to the beginninng of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(needle + j) != '\0' && *(haystack + i) != '\0')
				i++;
				j++;
		}
	}
	return (0);
}
