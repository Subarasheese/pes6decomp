/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct N { struct N *next; struct N *prev; s32 pad; void *owner; } N;
extern void func_001BB450(void *);
extern void func_001BB490(void *, void *);
extern void func_001BB4B0(void *, void *);

void func_001BB080(N *n) {
    N *a;
    N *b;
    if (n != NULL && n->owner != NULL) {
        a = n->next;
        b = n->prev;
        if (a != NULL) a->prev = b;
        if (b != NULL) b->next = a;
        if (a == NULL) func_001BB490(n->owner, b);
        if (b == NULL) func_001BB4B0(n->owner, a);
        func_001BB450(n->owner);
        if (n != NULL) {
            n->prev = NULL;
            n->next = NULL;
            n->owner = NULL;
        }
    }
}
