/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
static inline void moveToQueue(FileJob *job, s32 channel) {
    s32 old = job->channel;
    if (old != channel) {
        FileJob *before = job->previous;
        FileJob *after = job->next;
        if (before)
            before->next = after;
        else
            Pes6File_Channels[old].head = after;
        if (after)
            after->previous = job->previous;
        else
            Pes6File_Channels[old].tail = job->previous;
        job->channel = channel;
        func_0017F390(job, channel);
    }
}

void func_0017EAB0(void) {
    FileJob *job = Pes6File_Channels[FILE_CHANNEL_READ].head;
    while (job) {
        FileJob *next = job->next;
        switch (job->channel) {
        case FILE_CHANNEL_READ:
            job->status = 1;
            break;
        case FILE_CHANNEL_PENDING:
            job->priority = 0;
            moveToQueue(job, FILE_CHANNEL_IDLE);
            break;
        }
        job = next;
    }
    job = Pes6File_Channels[FILE_CHANNEL_PENDING].head;
    while (job) {
        FileJob *next = job->next;
        switch (job->channel) {
        case FILE_CHANNEL_READ:
            job->status = 1;
            break;
        case FILE_CHANNEL_PENDING:
            job->priority = 0;
            moveToQueue(job, FILE_CHANNEL_IDLE);
            break;
        }
        job = next;
    }
}
