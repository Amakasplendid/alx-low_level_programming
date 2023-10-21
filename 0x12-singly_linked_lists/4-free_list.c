#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer
 * Return: none
 */
void free_list(list_t *head)
{
	 list_t *tep;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tep = head->next;
		free(head->str);
		free(head);
		head = tep;
	}
	 free(head->str);
	 free(head);
}
