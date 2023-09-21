#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @r: pointer to the list_t list
 *
 * Return: number of elements in r
 */

size_t list_len(const list_t *r)
{
size_t k = 0;

while (r)
{
k++;
r = r->next;
}
return (k);
}
