#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t list.
 *
 * @head: Parameter double pointer that point to the head of the linked list
 * @n: Parameter with the value of the number data
 *
 * Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tempNode;

	tempNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tempNode->next)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
	}

	return (newNode);
}
