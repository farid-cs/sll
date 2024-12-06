/* MIT License
 * 
 * Copyright (c) Farid Farajli
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdlib.h>

#include "sll.h"

void
sll_init(Node *dummy)
{
	dummy->next = NULL;
}

int
sll_push(Node *dummy, int value)
{
	struct Node *new_head;

	new_head = malloc(sizeof(Node));
	if (new_head == NULL)
		return -1;

	new_head->value = value;
	new_head->next = dummy->next;
	dummy->next = new_head;
	return 0;
}

void
sll_pop(Node *dummy)
{
	struct Node *old_head;

	old_head = dummy->next;
	dummy->next = old_head->next;
	free(old_head);
}

Node *
sll_find(Node *dummy, int key)
{
	for (Node *i = dummy->next; i; i = i->next)
		if (i->value == key)
			return i;

	return NULL;
}

void
sll_free(Node *dummy)
{
	while (dummy->next)
		sll_pop(dummy);
}
