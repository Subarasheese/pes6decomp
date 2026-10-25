/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    u8 pad0[0x8];
    struct Node *prev;
    struct Node *next;
} Node;

extern Node *D_0052B148[];
extern Node *D_0052B14C[];
void func_00153FA0(Node *);

void func_001EB170(Node *node) {
    Node *prev;
    Node *next;

    if (node == NULL) {
        return;
    }
    prev = node->prev;
    next = node->next;
    if (prev != NULL) {
        prev->next = next;
    } else {
        D_0052B148[0] = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        D_0052B14C[0] = prev;
    }
    func_00153FA0(node);
}
