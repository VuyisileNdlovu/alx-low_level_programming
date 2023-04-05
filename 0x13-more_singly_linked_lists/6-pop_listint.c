#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list and
 * returns its data
 * @head: Pointer to a pointer to the head of the list
 *
 * This function deletes the head node od a linked list and returns its data.
 * If the list is empty it returns 0.
 * It takes a pointer to a pointer to the first element in the linked
 * list as its argument.
 *
 * Return: The data inside the deleted element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data;
	listint_t *temp;

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
