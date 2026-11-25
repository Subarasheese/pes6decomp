/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct UiListNode UiListNode;
typedef struct {
    u8 gap[0x10];
    s32 count;
    UiListNode *head, *tail;
} UiList;
struct UiListNode {
    u8 gap[0x10];
    UiList *owner;
    u8 gap14[8];
    UiListNode *previous, *next;
};
extern void Pes6Heap_Free(void *);

void func_001D63E0(UiListNode *node) {
    if (node) {
        UiList *list = node->owner;
        UiListNode *prev = node->previous;
        UiListNode *next = node->next;
        if (prev)
            prev->next = next;
        else
            list->head = next;
        if (next)
            next->previous = prev;
        else
            list->tail = prev;
        --list->count;
        Pes6Heap_Free(node);
    }
}
