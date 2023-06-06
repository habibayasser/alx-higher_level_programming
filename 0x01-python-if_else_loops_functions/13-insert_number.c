#include "lists.h"

/**
 * insert_node - inserts a number into a
 *  sorted singly linked list.
 *  @head: pointer to the first node in the linked list
 *  @number: number of byte that inserted in the linked list
 *
 *  Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *runner;

	runner = *head;

	new_node = maloc(sizeof(listint_t);

	 if (new_node == NULL)
                return (NULL);
	
	new_node->n = number;
       
	if (*head == NULL || (*head)->n > number)
        {
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }

	while (runner->next != NULL)
        {
                if ((runner->next)->n >= number)
                {
                        new_node->next = runner->next;
                        runner->next = new_node;
                        return (new_node);
                }
                runner = runner->next;
        }

        new_node->next = NULL;
        runner->next = new_node;
        return (new_node);
}
