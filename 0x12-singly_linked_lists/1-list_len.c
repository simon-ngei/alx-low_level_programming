#include "lists.h"
/**
 *list_len - find the length of a list
 *@h: head nodes
 *Return: length
 */

size_t list_len(const list_t *h)
{
size_t elements = 0;

while (h != NULL)
{
h = h->next;
elements++;
}
return (elements);
}
