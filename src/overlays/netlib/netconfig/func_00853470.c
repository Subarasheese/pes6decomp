/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off
#include "types.h"
typedef void (*NetworkStart)(void);
typedef struct {
    s32 id;
    u32 priority;
    u8 active, started;
    u8 reserved[2];
    NetworkStart start;
    void *data;
} NetworkJob;
extern NetworkJob D_008B1638[], D_008B1618[];
extern s32 func_00843F70(s16);
s32 func_00853470(s32 id, NetworkStart start, void *data, u32 priority) {
    NetworkJob *job;
    if (priority < 4)
        job = D_008B1638;
    else
        job = D_008B1618;
    if (job->start) {
        if (priority >= job->priority) {
            func_00843F70(-9);
            job->started = 0;
        } else
            return -1;
    }
    job->id = id;
    job->start = start;
    job->data = data;
    job->priority = priority;
    job->active = 1;
    start();
    job->started = 1;
    return 0;
}
