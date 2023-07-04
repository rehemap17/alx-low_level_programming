#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@m: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int m)
{
	int r = 0;
	int i = m;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		m--;
	}
	return (dest);
}
