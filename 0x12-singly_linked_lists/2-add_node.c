#include "lists.h"
#include <stdlib.h>

/**
 *add_node - function that adds a new node at the beginning of a list
 *@head: header list
 *@str: to be duplicated
 *Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *myelement;
unsigned int i, count = 0;

myelement = malloc(sizeof(list_t));
if (myelement == NULL)
return (NULL);
myelement->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
count++;
myelement->len = count;
myelement->next = *head;
*head = myelement;
return (*head);
}
