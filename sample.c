#include <assert.h>
#include <stdio.h>

#include "sll.h"

int
main(void)
{
	Node list;

	sll_init(&list);
	assert(sll_push(&list, 1) >= 0);
	assert(sll_push(&list, 2) >= 0);
	assert(sll_push(&list, 3) >= 0);

	for (Node *node = list.next; node != NULL; node = node->next)
		printf("value: %d\n", node->value);

	sll_free(&list);
	return 0;
}
