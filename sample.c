#include <stdio.h>

#include "sll.h"

int
main(void)
{
	SLL list;

	sll_init(&list);
	sll_push(&list, 1);
	sll_push(&list, 2);
	sll_push(&list, 3);

	for (Node *node = list.head; node != NULL; node = node->next)
		printf("value: %d\n", node->value);

	sll_free(&list);
	return 0;
}
