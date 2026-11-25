/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
extern void *func_00153FC0(s32 heap, s32 alignment, u32 bytes);
void *func_0017F560(FileJob *job, s32 slot, u32 bytes) {
    s32 alignment = 0;
    if (!job || !bytes)
        return 0;
    if (job->buffers[slot])
        return job->buffers[slot];
    switch (slot) {
    case 0:
        job->flags &= ~FILE_EXTERNAL_FIRST_BUFFER;
        alignment = 64;
        break;
    case 1:
        job->flags &= ~FILE_EXTERNAL_SECOND_BUFFER;
        alignment = 16;
        break;
    }
    job->sizes[slot] = bytes;
    job->buffers[slot] = func_00153FC0(job->heaps[slot], alignment, bytes);
    return job->buffers[slot];
}
