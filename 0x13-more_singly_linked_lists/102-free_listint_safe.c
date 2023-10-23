#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL.
 * @h: A pointer to a pointer to the head of the list.
 * Returns: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h;
    listint_t *next;
    size_t size = 0;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        size++;
        current = next;
    }

    *h = NULL;

    return (size);
}