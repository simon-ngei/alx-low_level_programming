#include "lists.h"

/**
 *free_list -  function that frees a list_t list
 *@head: head list
 *Return: results
 */
void free_list(list_t *head)
{
list_t *the_element;

while ((the_element = head) != NULL)
{
head = head->next;
free(the_element->str);
free(the_element);
}
}
