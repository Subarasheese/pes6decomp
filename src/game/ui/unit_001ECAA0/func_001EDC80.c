/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct Node {
    u8 reserved[8];
    struct Node *next;
} Node;
typedef struct {
    Node *head;
    u8 reserved[0x30];
    u16 lastIndex;
} List;
Node *func_001EDC80(const List *list, s32 index) {
    Node *node;
    if (list && (node = list->head) != 0 && index >= 0 && list->lastIndex >= index) {
        for (;;) {
            if (index) {
                node = node->next;
                index--;
            } else
                break;
        }
    } else
        node = 0;
    return node;
}
