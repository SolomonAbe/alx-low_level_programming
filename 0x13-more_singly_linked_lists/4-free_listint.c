#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * 
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: Always 0.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmpNode;

	while (head)
	{
		tmpNode = head->next;
		free(head);
		head = tmpNode;
	}
}
