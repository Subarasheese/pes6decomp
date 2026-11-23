/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "types.h"
typedef struct ModelNode ModelNode;
typedef struct {
    ModelNode *head, *tail;
} ModelList;
struct ModelNode {
    ModelNode *prev, *next;
    ModelList *owner;
    s32 reserved;
    void *resource;
};
extern void func_00145590(void *), Pes6Heap_Free(void *);
void func_001E1A60(ModelNode *node) {
    ModelNode *prev;
    ModelNode *next;
    ModelList *list;
    list = node->owner;
    prev = node->prev;
    next = node->next;
    if (prev)
        prev->next = next;
    else
        list->head = next;
    if (!next)
        list->tail = prev;
    else
        next->prev = prev;
    func_00145590(node->resource);
    Pes6Heap_Free(node->resource);
    Pes6Heap_Free(node);
}
