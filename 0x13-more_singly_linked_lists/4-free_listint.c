#include "lists.h"

/**
* free_listint - function frees a linked list
* @head: listint_t list to be freed
*
* This function frees a linked list of integer
* It takes a pointer to the head of the list as its argument,
* and frees each node in the  list using the free function.
*
* Return: None
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
