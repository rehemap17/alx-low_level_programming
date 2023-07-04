#include "main.h"
/**
 * _strpbrk - Entry point
 * @v: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *v, char *accept)
{
		int k;

		while (*v)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*v == accept[k])
			return (v);
			}
		v++;
		}

	return ('\0');
}
