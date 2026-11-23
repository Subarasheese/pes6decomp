/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct RenderNode {
    u8 reserved00[0x58];
    float depth;
    u8 reserved5c[0x14];
    struct RenderNode *previous, *next;
} RenderNode;
extern RenderNode *D_00CCCD98[], *D_00CCCD9C[];
void func_00C85E10(RenderNode *node) {
    RenderNode *current, *previous, *head, *tail;
    node->previous = 0;
    node->next = 0;
    head = D_00CCCD98[0];
    if (!head) {
        D_00CCCD98[0] = node;
        D_00CCCD9C[0] = node;
        return;
    }
    current = head;
    tail = D_00CCCD9C[0];
    do {
        if (current->depth <= node->depth) {
            if (current == head) {
                current->previous = node;
                node->next = current;
                D_00CCCD98[0] = node;
                return;
            }
            previous = current->previous;
            previous->next = node;
            node->previous = current->previous;
            node->next = current;
            current->previous = node;
            return;
        }
        if (current == tail) {
            current->next = node;
            node->previous = current;
            D_00CCCD9C[0] = node;
            return;
        }
        current = current->next;
    } while (current);
}
