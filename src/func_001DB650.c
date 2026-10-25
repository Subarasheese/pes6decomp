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

extern char D_0052ABB0[];
extern char D_0052ABB4[];

void func_001DB650(Node *node) {
    if (node == NULL) {
        return;
    }
    if (M2C_FIELD(D_0052ABB0, Node **, 0) != NULL) {
        M2C_FIELD(D_0052ABB4, Node **, 0)->next = node;
        node->prev = M2C_FIELD(D_0052ABB4, Node **, 0);
    } else {
        M2C_FIELD(D_0052ABB0, Node **, 0) = node;
        node->prev = NULL;
    }
    M2C_FIELD(D_0052ABB4, Node **, 0) = node;
    node->next = NULL;
}
