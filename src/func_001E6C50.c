/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    void *data;
    u8 pad[0xC];
    u8 ref;
    u8 type;
} Node;

extern Node *D_0052B130[];
extern Node *D_0052B134[];
extern void func_00145590(void *);
extern void func_00153FA0(void *);

s32 func_001E6C50(Node *n) {
    Node *prev;
    Node *next;
    if (n == NULL) return 0;
    if (--n->ref != 0) return 0;
    prev = n->prev;
    next = n->next;
    if (prev != NULL) {
        prev->next = next;
    } else {
        D_0052B130[0] = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        D_0052B134[0] = prev;
    }
    if (n->type != 2) func_00145590(n->data);
    func_00153FA0(n->data);
    func_00153FA0(n);
    return 1;
}
