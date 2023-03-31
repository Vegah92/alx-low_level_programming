#include "lists.h"
/**
*print_list-Entry point
*@h:pointer to the head
*Description:function that prints all the elements of a list_t list.
*Return:A string
*/


size_t print_list(const list_t *h)
{
size_t a = 0;

while (h)
{
if (!h->str)

printf("[0] (nil)\n");

else

printf("[%u]  %s\n", h->len, h->str);
h = h->next;
a++;

}
return (a);
}
