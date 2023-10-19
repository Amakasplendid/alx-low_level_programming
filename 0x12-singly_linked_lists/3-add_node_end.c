#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - prints end of a list
 * @head: nead of the node
 * @str: inputted str
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *new_node;

	a = *head;

	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (a->next != NULL)
		a = a->next;
	a->next = new_node;
	return (*head);
}
/**
* create_node - creates new nodes
* @str: inputted string
* Return: pointer
*/
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
* len - length of the string
* @str: string
* Return: Integer
*/
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
