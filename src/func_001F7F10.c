/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

extern Node *D_003E9980;
extern Node *D_003E9984;

void func_001F7F10(Node *node) {
    Node *prev = node->prev;
    Node *next = node->next;

    if (prev != NULL) {
        prev->next = next;
    } else {
        D_003E9980 = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        D_003E9984 = prev;
    }
}
