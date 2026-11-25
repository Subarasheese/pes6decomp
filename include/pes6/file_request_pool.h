#ifndef PES6_FILE_REQUEST_POOL_H
#define PES6_FILE_REQUEST_POOL_H

#include "pes6/file_request_queue.h"

enum { FILE_POOL_SIZE = 256, FILE_QUEUE_COUNT = 5 };
extern FileJob D_00511620[FILE_POOL_SIZE];
extern void *func_001C48E8(void *, s32, u32);
typedef char check_job_size[sizeof(FileJob) == 0x88 ? 1 : -1];
static inline void resetFileQueues(void) {
    s32 i;
    func_001C48E8(Pes6File_Channels, 0, FILE_QUEUE_COUNT * sizeof(FileQueue));
    func_001C48E8(D_00511620, 0, sizeof(D_00511620));
    D_00511620[0].next = &D_00511620[1];
    for (i = 1; i < FILE_POOL_SIZE - 1; i++) {
        D_00511620[i].previous = &D_00511620[i - 1];
        D_00511620[i].next = &D_00511620[i + 1];
    }
    D_00511620[FILE_POOL_SIZE - 1].previous = &D_00511620[FILE_POOL_SIZE - 2];
    Pes6File_Channels[FILE_CHANNEL_IDLE].head = &D_00511620[0];
    Pes6File_Channels[FILE_CHANNEL_IDLE].tail = &D_00511620[FILE_POOL_SIZE - 1];
}

#endif
