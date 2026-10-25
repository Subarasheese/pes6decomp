/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
} Node;

extern Node *D_003E9980;
extern Node *D_003E9984;

void func_001F7F50(Node *node) {
    if (D_003E9980 != NULL) {
        node->prev = D_003E9984;
        D_003E9984->next = node;
    } else {
        D_003E9980 = node;
        node->prev = NULL;
    }
    D_003E9984 = node;
}
