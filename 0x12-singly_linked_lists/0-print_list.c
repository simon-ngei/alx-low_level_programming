#include "lists.h"
/**
 *print_list - prints all elements in a list
 *@h: linked list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t element;
element = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
element++;
}
return (element);
}
