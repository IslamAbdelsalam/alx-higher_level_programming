#include "lists.h"
/**
 *	check_cycle - this function will check if the list is circular or single
 *	@list: head of the list
 *	Return: 1 if it circular
 *			0 if it single
*/
int check_cycle(listint_t *list)
{
	listint_t *current;

	current = list;
	while (current != NULL)
	{
		current = current->next;
		if (current == list)
			return (1);
	}
	return (0);
}
