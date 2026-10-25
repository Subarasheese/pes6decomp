/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    u8 pad8[4];
    u32 pos;
    s32 a;
    s32 b;
    u8 pad18[0x10];
    u8 c;
} Node;

extern Node *D_0052ABB0[];
extern Node *D_0052ABB4[];

Node *func_001DB590(s32 a, s32 b, s32 c) {
    Node *node;

    node = D_0052ABB0[0];
    if (node == NULL) {
        return NULL;
    }
    do {
        if (node->a == a && node->b == b && node->c == c) {
            return node;
        }
        node = node->next;
    } while (node != NULL);
    return NULL;
}
