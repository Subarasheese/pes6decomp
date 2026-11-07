/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    u8 pad8[4];
    u32 pos;
    s32 a;
    s32 b;
    u8 pad18[0x10];
    u8 c;
} Node;

extern Node *D_0052ABB0[];
extern Node *D_0052ABB4[];

void func_001DB540(u32 from, u32 to) {
    u64 f = from;
    u64 t = to;
    Node *node;

    for (node = D_0052ABB0[0]; node != NULL; node = node->next) {
        node->pos = t + (node->pos - f);
    }
}
