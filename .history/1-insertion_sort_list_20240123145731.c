#include "sort.h"

/**
 * swap_nodes - Operation theat swaps nodes
 * @h: Double pointer to the head of the doubly-linked list.
 * @n1: Double pointer to the first node to swap
 * @n2
*/
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
    //
}

/**
 * insertion_sort_list - Operation to sort a doubly linked list of integers using the insertion sort algorithm
 * 
 * @list: Double pointer to the doubly linked list of integers.
 * 
 * Description: a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *iter, *insert, *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    for (iter = (*list)->next; iter != NULL; iter = tmp)
    {
        tmp = iter->next;
        insert = iter->prev;
        while (insert != NULL && iter->n < insert->n)
        {
            print_list((const listint_t *)*list);
        }
    }
}