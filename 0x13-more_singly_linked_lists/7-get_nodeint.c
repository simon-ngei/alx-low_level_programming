#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a list
 *@head: pointer
 *@index: index of the pointet
 *Return: NULL if the pointer does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k;
for (k = 0; k < index; k++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
