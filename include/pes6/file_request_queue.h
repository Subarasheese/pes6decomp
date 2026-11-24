#ifndef PES6_FILE_REQUEST_QUEUE_H
#define PES6_FILE_REQUEST_QUEUE_H

#include "pes6/resource_bank_load.h"
typedef struct FileJob FileJob;
typedef void (*FileStep)(FileJob *);
typedef void (*FileReady)(LoadedResource *);
struct FileJob {
    FileJob *previous, *next;
    u8 arguments[0x4c];
    s32 resource;
    u32 flags;
    s32 priority;
    void *buffers[2];
    u32 sizes[2];
    s32 heaps[2];
    FileStep read, process;
    FileReady ready;
    u8 channel, status, preloaded;
};
typedef struct {
    FileJob *head, *tail;
} FileQueue;
typedef struct {
    FileJob *tail;
    u8 nextHead[4];
} FileQueueTailColumn;
enum {
    FILE_CHANNEL_IDLE,
    FILE_CHANNEL_PENDING,
    FILE_CHANNEL_READ,
    FILE_CHANNEL_PROCESS,
    FILE_CHANNEL_CALLBACK
};
enum { FILE_EXTERNAL_FIRST_BUFFER = 0x01000000, FILE_EXTERNAL_SECOND_BUFFER = 0x02000000 };
extern FileQueue Pes6File_Channels[];
extern FileQueueTailColumn D_00519E24[];
extern FileJob *Pes6File_GetChannelBusy(s32 channel);
extern void func_0017F390(FileJob *job, s32 channel),
    func_0017ECC0(FileJob *job, s32 channel, s32 priority),
    func_0017EDD0(FileJob *job, s32 channel);
static inline void transferJob(FileJob *job, s32 channel) {
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
            D_00519E24[old].tail = job->previous;
        job->channel = channel;
        func_0017F390(job, channel);
    }
}

#endif
