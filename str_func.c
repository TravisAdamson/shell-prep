#include "main.h"

/**
 * str_len - Find the length of a given string
 * @str: The string to look at
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count]; count++)
		;
	return (count);
}

/**
 * str_copy - Copys a str to a new location
 * @dest: The destination
 * @src: The Source
 *
 * Return: Pointer to Dest
 */
char *str_copy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/**
 * str_n_copy - Copys n bytes of a str to a new location
 * @dest: The destination
 * @src: The Source
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to Dest
 */
char *str_n_copy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		if (index < n)
		{
			dest[index] = src[index];
			index++;
		}
		else
			break;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/**
 * str_cmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Value based on comparison
 */
int str_cmp(char *s1, char *s2)
{
	int index;
	int results;

	index = 0;
	results = 0;
	while ((s1[index] != '\0') && (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
		{
			results = s1[index] - s2[index];
			return (results);
		}
		index++;
	}
	return (0);
}
