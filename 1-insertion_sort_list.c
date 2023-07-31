#include "sort.h"
/**
 * insertion_sort_list - sorting algorithm with insertion
 * @list: pointer on list pointer
 * Return: nothong
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *cur;
	listint_t *tmp;

	head = *list;
	if (head->next == NULL)
		return;
	while (head)
	{
		cur = head;
		while (cur && cur->prev)
		{
			if (cur->n < cur->prev->n)
			{
				tmp = cur->prev;
				cur->prev = tmp->prev;
				tmp->next = cur->next;
				if (cur->next)
					cur->next->prev = tmp;
				if (tmp->prev)
					tmp->prev->next = cur;
				else
					*list = cur;
				cur->next = tmp;
				tmp->prev = cur;
				print_list(*list);
			}
			else
				break;
		}
		head = head->next;
	}
}
