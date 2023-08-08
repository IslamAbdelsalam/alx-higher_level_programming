#include "lists.h"
/**
 *	check_cycle - this function will check if the list is circular or single
 *	@list: head of the list
 *	Return: 1 if it circular
 *			0 if it single
*/
int check_cycle(listint_t *list)
{
	listint_t *current, *loop;

	current = list;
	loop = list;
	while (current != NULL)
	{
		while (loop != NULL)
		{
			loop = loop->next;
			if (current == loop)
				return (1);
		}
		current = current->next;
		loop = current;
	}
	return (0);
}
