/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

extern Node *D_003E994C;
extern Node *D_003E9950;

void func_001D9380(Node *node) {
    Node *prev = node->prev;
    Node *next = node->next;

    if (prev != NULL) {
        prev->next = next;
    } else {
        D_003E994C = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        D_003E9950 = prev;
    }
}
