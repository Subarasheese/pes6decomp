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

void func_001DB600(Node *node) {
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
        D_0052ABB0[0] = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        D_0052ABB4[0] = prev;
    }
}
