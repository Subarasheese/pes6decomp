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

void func_001D4E90(List *list, Node *node) {
    Node *head = list->head;
    Node *tail = list->tail;

    if (head != NULL) {
        tail->next = node;
        node->prev = tail;
    } else {
        list->head = node;
        node->prev = NULL;
    }
    list->tail = node;
    node->next = NULL;
    list->count++;
}
