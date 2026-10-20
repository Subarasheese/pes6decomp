/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Remove a node from the doubly linked list whose head is D_003729B0; returns the node's former next. */
struct ListNode {
	ListNode *next;
	ListNode *prev;
};

extern "C" ListNode *D_003729B0;

extern "C" ListNode *func_00110298(ListNode *node)
{
	ListNode *next = node->next;
	if (node->prev)
		node->prev->next = next;
	else
		D_003729B0 = next;
	if (next)
		next->prev = node->prev;
	node->prev = 0;
	return next;
}
