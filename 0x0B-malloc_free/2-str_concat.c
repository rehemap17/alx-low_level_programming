#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @u1: input one to concat
 * @u2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *u1, char *u2)
{
	char *conct;
	int i, ci;

	if (u1 == NULL)
		u1 = "";
	if (u2 == NULL)
		u2 = "";

	i = ci = 0;
	while (u1[i] != '\0')
		i++;
	while (u2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (u1[i] != '\0')
	{
		conct[i] = u1[i];
		i++;
	}

	while (u2[ci] != '\0')
	{
		conct[i] = u2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
