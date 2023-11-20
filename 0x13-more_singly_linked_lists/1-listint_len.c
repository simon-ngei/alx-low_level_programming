#include "lists.h"
#include <stdio.h>

/**
 *listint_len - function that returns number of elements
 *@h: to be checked
 *Return: always 0
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
