#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character in string
 * Return: pointer to string
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
