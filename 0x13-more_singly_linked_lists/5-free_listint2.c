#include "lists.h"

/**
 * free_listint2 - funciton that frees a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * 
 * Return: Always 0
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpNode;

	if (head == NULL)
		return;

	while (*head)
	{
		tmpNode = (*head)->next;
		free(*head);
		*head = tmpNode;
	}

	head = NULL;
}
