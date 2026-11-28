/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_timer_queue.h"
extern void func_0016AB68(NtguiTimerNode *timer);
typedef union {
    NtguiTimerQueue queue;
    struct {
        u8 reserved00[0xfbc];
        NtguiTimerNode *first;
    } list;
} NtguiTimerList;
void func_0016A800(NtguiTimerList *q, s32 handle) {
    NtguiTimerNode *node = q->list.first;
    NtguiTimerNode *before = &q->queue.head;
    if (!handle)
        return;
    while (node) {
        NtguiTimerNode *next = node->next;
        if (node == (NtguiTimerNode *)handle) {
            before->next = next;
            func_0016AB68(node);
        } else
            before = node;
        node = next;
    }
}
