#include "list.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a singly linked
 *  list has a cycle in it.
 *  @list: pointer to the singly linked list
 *  Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *f, *n;

	if (list == NULL || list->next == NULL)
		return (0);

	f = list->next;
	n = list->next->next;

	while (f && n && n->next)
	{
		if (f == n)
			return (1);

		f = f->next;
		n = n->next->next;
	}

	return (0);
}
