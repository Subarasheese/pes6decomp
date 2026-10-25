/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct Item { u8 pad[0x24]; s32 id; s32 key; } Item;
typedef struct Node Node;
struct Node {
    s32 v0;
    s32 pad4;
    u8 b8;
    u8 pad9;
    s16 hA;
    s32 w0C;
    Node *prev;
    Node *next;
    Item *item;
};
typedef struct {
    u8 pad[0x1C];
    Node *used;
    Node *free;
} Ctx;

extern Ctx *func_00256140(void);

s32 func_00305C60(Node *a0, s32 a1) {
    Ctx *c = func_00256140();
    Node *s = c->used;
    Node *p;
    Item *it;
    for (p = s->next; p != s; p = p->next) {
        it = p->item;
        if (it != 0 && it->id != 0xFF && a0 != p && a1 == it->key) {
            return 1;
        }
    }
    return 0;
}
