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
	char *like;
	char *joy;

	while (*haystack != '\0')
	{
		like = haystack;
		joy = needle;

		while (*haystack != '\0' && *joy != '\0' && *haystack == *joy)
		{
			haystack++;
			joy++;
		}
		if (!*joy)
			return (like);
		haystack = like + 1;
	}
	return (0);
}
