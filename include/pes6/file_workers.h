#ifndef PES6_FILE_WORKERS_H
#define PES6_FILE_WORKERS_H

#include "types.h"
enum { FILE_WORKER_COUNT = 3, FILE_STACK_BYTES = 0x2000 };
typedef void (*FileWorkerEntry)(void);
typedef struct {
    u8 stack[FILE_STACK_BYTES];
    FileWorkerEntry entry;
    s32 thread;
    u8 reserved[8];
} FileWorker;
extern FileWorker D_00519E60[FILE_WORKER_COUNT];
extern s32 D_00519E48[], D_003E986C;
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_0012AF40(s32 maximum, s32 initial, u32 option);
extern s32 func_0012AE10(FileWorkerEntry entry, void *stack, u32 bytes, s32 priority, s32 option,
                         s32 argument);
extern s32 func_0012AD80(s32 semaphore), func_0012AFA0(s32 thread);
extern void func_0017FFE0(void), func_00181350(void), func_0017FFF0(void);
extern s32 func_00180220(void);

#endif
