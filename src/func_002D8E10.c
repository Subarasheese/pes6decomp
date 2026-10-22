/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct DrawItem {
    u8 pad00[0x10];
    s32 visible; /* 0x10 */
    s32 layer;   /* 0x14: which of the four lists */
} DrawItem;

typedef struct DrawNode {
    DrawItem *item;
    struct DrawNode *next;
    struct DrawNode *prev;
} DrawNode;

/* The four lists' head nodes (only next is used). */
extern DrawNode D_005E5EC0[4];

void func_00153FA0(void *p);

/* Unlink item's node from its list and free it. */
void func_002D8E10(DrawItem *item)
{
    DrawNode *n;

    for (n = D_005E5EC0[item->layer].next; n->item != item; ) {
        n = n->next;
        if (n == 0) {
            break;
        }
    }
    if (n != 0) {
        if (n->next != 0) {
            n->prev->next = n->next;
            n->next->prev = n->prev;
        } else {
            n->prev->next = 0;
        }
        func_00153FA0(n);
    }
}
