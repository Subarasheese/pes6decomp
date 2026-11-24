/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
static inline FileJob *readQueueTail(s32 channel) {
    FileJob *volatile *tail = &D_00519E24[channel].tail;
    return *tail;
}

void func_0017F390(FileJob *job, s32 channel) {
    FileJob **head = &Pes6File_Channels[channel].head;
    FileJob *first = *head;
    if (!first) {
        *head = job;
        D_00519E24[channel].tail = job;
        job->previous = 0;
        job->next = 0;
    } else {
        if (job->priority == 0) {
            D_00519E24[channel].tail->next = job;
            job->previous = readQueueTail(channel);
            D_00519E24[channel].tail = job;
            job->next = 0;
        } else if (job->priority == 1) {
            if (job->priority != first->priority) {
                job->previous = 0;
                job->next = *head;
                (*head)->previous = job;
                *head = job;
            } else if (job->priority == D_00519E24[channel].tail->priority) {
                job->previous = D_00519E24[channel].tail;
                job->next = 0;
                readQueueTail(channel)->next = job;
                D_00519E24[channel].tail = job;
            } else {
                FileJob *previous = first;
                do {
                    if (first->priority != job->priority)
                        break;
                    previous = first;
                    first = first->next;
                } while (first);
                previous->next = job;
                job->previous = previous;
                first->previous = job;
                job->next = first;
            }
        }
    }
}
