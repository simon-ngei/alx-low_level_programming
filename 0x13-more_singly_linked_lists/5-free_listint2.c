#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list
 *@head: head of the litint
 *Return: always 0
 */
void free_listint2(listint_t **head)
{
listint_t *std;
if (head == NULL)
return;
while (*head)
{
std = (*head)->next;
free(*head);
*head = std;
}
head = NULL;
}
