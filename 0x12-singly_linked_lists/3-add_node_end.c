#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end of a list_t
 *@head: head list
 *@str: to be duplicated
 *Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *myelement, *tmp;
unsigned int i, count = 0;
myelement = malloc(sizeof(list_t));
if (myelement == NULL)
return (NULL);
myelement->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
myelement->len = count;
myelement->next = NULL;
tmp = *head;

if (tmp == NULL)
*head = myelement;
else
{
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = myelement;
}
return (*head);
}
