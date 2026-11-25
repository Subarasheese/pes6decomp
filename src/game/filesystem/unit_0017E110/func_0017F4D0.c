/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
extern void Pes6Heap_Free(void *);
static inline void releaseOwned(void **entry, void *buffer, u32 flags, u32 mask) {
    if (!(flags & mask)) {
        Pes6Heap_Free(buffer);
        *entry = 0;
    }
}
void func_0017F4D0(FileJob *job, s32 slot) {
    void *buffer;
    if (job) {
        buffer = job->buffers[slot];
        if (!buffer)
            return;
        switch (slot) {
        case 0:
            releaseOwned(&job->buffers[slot], buffer, job->flags, FILE_EXTERNAL_FIRST_BUFFER);
            break;
        case 1:
            releaseOwned(&job->buffers[slot], buffer, job->flags, FILE_EXTERNAL_SECOND_BUFFER);
            break;
        }
    }
}
