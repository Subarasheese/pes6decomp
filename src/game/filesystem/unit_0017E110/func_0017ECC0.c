/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
void func_0017ECC0(FileJob *job, s32 channel, s32 priority) {
    if (channel != FILE_CHANNEL_PENDING) {
        job->priority = 0;
        transferJob(job, channel);
        return;
    }
    job->priority = priority;
    transferJob(job, channel);
}
