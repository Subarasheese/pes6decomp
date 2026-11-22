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

void Pes6Task_Remove(void (*fn)(void));
void func_002D8D80(void);
void func_002D8CF0(void);
void func_002D8C60(void);
void func_002D8BD0(void);

void func_002D8F60(void)
{
    Pes6Task_Remove(func_002D8D80);
    Pes6Task_Remove(func_002D8CF0);
    Pes6Task_Remove(func_002D8C60);
    Pes6Task_Remove(func_002D8BD0);
}
