#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer type data for the new node to contain.
 *
 * Return: If the function fails - NULL. Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
