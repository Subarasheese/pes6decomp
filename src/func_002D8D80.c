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

s32 func_001D3090(DrawItem *item);
void func_001CECC0(s32 a);
void func_001CEB90(void);
void func_001CEBF0(void);
void func_001CEBD0(s32 a);
void func_001CEAB0(void);
void func_001D3260(DrawItem *item);
void func_001CEC70(void);

/* Draw every visible item of list 0. */
void func_002D8D80(void)
{
    DrawNode *n;

    for (n = D_005E5EC0[0].next; n != 0; n = n->next) {
        if (n->item->visible) {
            func_001CECC0(func_001D3090(n->item));
            func_001CEB90();
            func_001CEBF0();
            func_001CEBD0(2);
            func_001CEAB0();
            func_001D3260(n->item);
            func_001CEC70();
        }
    }
}
