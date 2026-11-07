/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    u8 pad0[8];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    u8 pad0[0x1C];
    s32 count;
    Node *head;
    Node *tail;
} List;

void func_001D4E50(List *list, Node *node) {
    Node *prev = node->prev;
    Node *next = node->next;

    if (prev != NULL) {
        prev->next = next;
    } else {
        list->head = next;
    }
    if (next != NULL) {
        next->prev = prev;
    } else {
        list->tail = prev;
    }
    list->count--;
}
