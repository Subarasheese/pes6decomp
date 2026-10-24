/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    u8 pad0;
    u8 active;
    u8 pad2;
    u8 a;
    u8 pad4;
    u8 b;
    u8 pad6[0x1E];
    struct Node *next;
} Node;

extern Node *D_003E9894;

void func_001AFD20(void) {
    Node *node;

    for (node = D_003E9894; node != NULL; node = node->next) {
        if (node->active != 0) {
            node->a = 0;
            node->b = 1;
        }
    }
}
