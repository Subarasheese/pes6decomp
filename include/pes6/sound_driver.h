#ifndef PES6_SOUND_DRIVER_H
#define PES6_SOUND_DRIVER_H

#include "types.h"

enum { SOUND_QUEUE_CAPACITY = 64, SOUND_QUEUE_SEND_LIMIT = 8 };
typedef struct {
    u32 command;
    s32 first, second, third;
} SoundCommand;
typedef struct {
    s32 read2, count2, sent2, peak2, reserved10, read3, count3, sent3, peak3, reserved24,
        reserved28, read4, count4, peak4;
    SoundCommand commands2[SOUND_QUEUE_CAPACITY], commands3[SOUND_QUEUE_CAPACITY],
        commands4[SOUND_QUEUE_CAPACITY];
} SoundQueues;

typedef struct sceSifClientData {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData;

typedef struct sceSifDmaData {
    void *data;
    void *addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;

extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno, unsigned int mode, void *send,
                         int ssize, void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);

typedef void (*SoundFilter)(u32 command, s32 first, s32 second, s32 third, s32 *suppressed);
typedef struct {
    s32 reserved00[2];
    SoundFilter filter;
    s32 reserved0C[17];
} SoundSettings;
extern SoundSettings D_00584360;
extern SoundQueues D_00583340;
extern sceSifClientData SoundDriver_RpcClient;
extern SoundCommand D_0058C680;
extern SoundFilter func_00251C30(void);
extern s32 SoundDriver_IsBusy(void);
extern s32 SoundDriver_Command(u32 command, s32 first, s32 second, s32 third);
extern s32 func_0024FB20(u32 command, s32 first, s32 second, s32 third);
extern s32 func_0024F5B0(u32 command, s32 first, s32 second, s32 third);
extern s32 func_00255C10(u32 command, s32 first, s32 second, s32 third);
extern void func_00255CF0(u32 command, s32 first, s32 second, s32 third);
extern void FlushCache(s32 mode);

#endif
