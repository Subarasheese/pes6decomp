/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

extern Node *D_003E994C;
extern Node *D_003E9950;

void func_001D93C0(Node *node) {
    if (D_003E994C != NULL) {
        node->prev = D_003E9950;
        D_003E9950->next = node;
    } else {
        D_003E994C = node;
        node->prev = NULL;
    }
    D_003E9950 = node;
}
