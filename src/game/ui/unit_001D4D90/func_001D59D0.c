/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    u8 pad0[4];
    struct Node *next;
    s32 id;
} Node;

extern Node *D_003E993C;

Node *func_001D59D0(s32 id) {
    Node *node = D_003E993C;

    if (node == NULL) {
        return NULL;
    }
    do {
        if (node->id == id) {
            return node;
        }
        node = node->next;
    } while (node != NULL);
    return NULL;
}
