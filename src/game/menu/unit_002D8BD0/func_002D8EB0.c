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

void *func_00154070(s32 size);
void func_001C48E8(void *p, s32 c, s32 n);

/* Append item to its list unless it is already there. */
void func_002D8EB0(DrawItem *item)
{
    DrawNode *p = &D_005E5EC0[item->layer];
    DrawNode *n;

    for (n = p->next; n != 0; n = n->next) {
        p = n;
        if (n->item == item) {
            break;
        }
    }
    if (p->item == item) {
        return;
    }
    p->next = func_00154070(0x18);
    func_001C48E8(p->next, 0, 0x18);
    p->next->prev = p;
    p->next->item = item;
}
