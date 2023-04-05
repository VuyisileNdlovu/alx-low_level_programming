#include "lists.h"

/**
 * free_listint2 - Frees a linked list of intefers
 * and set the head to NULL
 * @head: Pointer to the head of the list
 *
 * This function frees a linked list of integers.
 * It takes a pointer to a pointer of the head of the list as its argument,
 * and frees each node in the list using the 'free' function
 * It also sets the head to a NULL after freeing the list.
 *
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
