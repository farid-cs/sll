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

	sll_sort(&list);

	for (Node *node = list.next; node != NULL; node = node->next)
		printf("%d -> ", node->value);

	sll_free(&list);
	return 0;
}
