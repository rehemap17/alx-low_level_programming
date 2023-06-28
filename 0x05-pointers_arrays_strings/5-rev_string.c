#include "main.h"

/**
 * rev_string - Reverses a string
 * @t: Input string
 * Return: String in reverse
 */

void rev_string(char *t)
{
	char rev = t[0];
	int counter = 0;
	int i;

	while (t[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = t[i];
		t[i] = t[counter];
		t[counter] = rev;
	}
}
