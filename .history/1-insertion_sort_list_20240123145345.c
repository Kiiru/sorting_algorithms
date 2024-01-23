#include "sort.h"

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
            print_list(())
        }
    }
}