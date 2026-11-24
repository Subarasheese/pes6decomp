/* compiler: mwcc-3.0.1b151 */
#pragma no_branch_likely on
#include "pes6/file_request_queue.h"
static inline FileJob *findRequest(s32 channel, s32 resource) {
    FileJob *job = Pes6File_Channels[channel].head;
    if (job == 0)
        return 0;
    do {
        if (job->resource == resource)
            return job;
        job = job->next;
    } while (job);
    return 0;
}
s32 func_0017F270(s32 channel, s32 resource) {
    s32 result = 0;
    FileJob *job = Pes6File_Channels[channel].head;
    if (job) {
        job = findRequest(channel, resource);
        if (job) {
            switch (job->channel) {
            case FILE_CHANNEL_READ:
                job->status = 1;
                break;
            case FILE_CHANNEL_PENDING:
                job->priority = 0;
                transferJob(job, FILE_CHANNEL_IDLE);
                break;
            }
            result = 1;
        }
    }
    return result;
}
