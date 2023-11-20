#include "lists.h"

/**
 *sum_listint - function that returns sum of data
 *@head: the pointer of the list
 *Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
