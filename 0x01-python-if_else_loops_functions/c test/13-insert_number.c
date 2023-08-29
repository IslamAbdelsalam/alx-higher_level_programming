#include "lists.h"

/**
 *
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current;
	listint_t *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return NULL;

	new_node->n = number;
	current = *head;

	while (current != NULL)
	{
		if (current->n > new_node->n )
		{
			temp = current;
			current = new_node;
			new_node->next = temp;
			return (new_node);
		}
		else if (current->next == NULL)
		{
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
	}
	return (new_node);
}

listint_t add_node_to_first(**head, **newNode)
{

}


