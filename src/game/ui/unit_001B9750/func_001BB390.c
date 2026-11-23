/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct Link {
    struct Link *next, *previous;
    s32 value;
    void *owner;
} Link;
Link *func_001BB390(Link *node, s32 index) {
    if (node && node->owner) {
        s32 i = 0;
        if (index > 0) {
            do {
                Link *next = node->next;
                if (!next)
                    break;
                node = next;
                ++i;
            } while (i < index);
        }
    }
    return node;
}
