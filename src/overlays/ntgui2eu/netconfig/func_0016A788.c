/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_timer_queue.h"

extern s32 D_005BFF94[];
extern NtguiTimerNode *func_0016AAD8(NtguiTimerNode *next, u64 delay, void *owner, void *user,
                                     NtTimerCallback callback);

s32 func_0016A788(void *queue, u64 requested, void *owner, void *user, NtTimerCallback callback) {
    NtguiTimerQueue *q = queue;
    NtguiTimerNode *tail = &q->head;
    u64 elapsed = (s64)D_005BFF94[0] - q->lastTick;
    u64 delay = elapsed + 1;
    if (elapsed < requested)
        delay = requested;
    while (tail->next) {
        tail = tail->next;
    }
    tail->next = func_0016AAD8(tail->next, delay, owner, user, callback);
    return (s32)tail->next;
}
