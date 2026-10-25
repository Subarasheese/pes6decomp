/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

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
    s32 w18;
};
typedef struct {
    u8 pad[0x1C];
    Node *used;
    Node *free;
} Ctx;

extern Ctx *func_00256140(void);

Node *func_00305EC0(s32 a0, s32 a1, s32 a2) {
    Ctx *c = func_00256140();
    Node *s = c->free;
    Node *n = s->next;
    if (n == s) {
        return 0;
    }
    s->next = n->next;
    n->v0 = a0;
    n->b8 = 0;
    n->w0C = 0;
    n->hA = a1;
    n->w18 = a2;
    n->prev = c->used->prev;
    n->next = c->used;
    n->prev->next = n;
    n->next->prev = n;
    return n;
}
