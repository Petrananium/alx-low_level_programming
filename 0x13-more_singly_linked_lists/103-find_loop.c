#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *sam = head;
listint_t *est = head;
if (!head)
return (NULL);
while (sam && est && est->next)
{
est = est->next->next;
sam = sam->next;
if (est == sam)
{
sam = head;
while (sam != est)
{
sam = sam->next;
est = est->next;
}
return (est);
}
}
return (NULL);
}


