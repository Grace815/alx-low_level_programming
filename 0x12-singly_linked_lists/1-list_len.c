#include <stdlib.h>
#include "lists.h"

/**
 * list_len - brings back the size of a linked list's elements
 * @h: the list_t list's pointer
 *
 * Return: size of h's elements
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
