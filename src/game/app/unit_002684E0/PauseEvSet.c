/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    s32 finished;
    s32 (*poll)(s32);
    void (*onReady)(s32);
    s32 value;
} PendingTask;
s32 PauseEvSet(PendingTask *task) {
    if (task->finished)
        return 1;
    if (task->poll(task->value)) {
        void (*onReady)(s32) = task->onReady;
        if (onReady)
            onReady(task->value);
        return 1;
    }
    return 0;
}
