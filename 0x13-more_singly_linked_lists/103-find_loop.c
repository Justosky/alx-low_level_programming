#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: pointer to the first element of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *j;

	i = j = head;
	while (i && j && j->next)
	{
		i = i->next;
		j = j->next->next;
		if (i == j)
		{
			i = head;
			break;
		}
	}
	if (!i || !j || !j->next)
		return (NULL);
	while (i != j)
	{
		i = i->next;
		j = j->next;
	}
	return (j);
}

