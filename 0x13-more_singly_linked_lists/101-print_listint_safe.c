#incuded "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list and returns the number of nodes.
 * @head: A pointer to the head of the list.
 * Returns: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t node_count = 0;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        node_count++;
        current = current->next;

        if (current == head)
	{
            fprintf(stderr, "List is circular. Exiting...\n");
            exit(98);
        }
    }

    return (node_count);
}
