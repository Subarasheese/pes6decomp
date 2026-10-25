/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Node {
    struct List *list;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    u8 pad[0x2C];
    u16 count;
    u8 pad2[4];
    u8 flags;
} List;

extern Node *func_001EF960(void);

Node *func_001EDD00(List *l) {
    Node *n;
    if (l == NULL) return NULL;
    n = func_001EF960();
    if (n == NULL) return NULL;
    if (l->head == NULL) {
        l->head = n;
        n->prev = NULL;
    } else {
        l->tail->next = n;
        n->prev = l->tail;
    }
    l->tail = n;
    l->count++;
    n->next = NULL;
    n->list = l;
    l->flags |= 2;
    return n;
}
