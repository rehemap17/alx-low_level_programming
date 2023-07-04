#include "main.h"
/**
 * _strchr - Entry point
 * @p: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *p, char c)
{
	int i = 0;

	for (; p[i] >= '\0'; i++)
	{
		if (p[i] == c)
			return (&p[i]);
	}
	return (0);
}
