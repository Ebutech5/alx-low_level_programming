#include "lists.h"


/**
 * find_listint_loop - Detects and returns the node where the loop starts in a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Returns: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise, *hare;

    tortoise = head;
    hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }
            return (tortoise);
        }
    }

    return (NULL);
}
