#ifndef PES6_NTGUI_WINDOW_TASK_H
#define PES6_NTGUI_WINDOW_TASK_H

#include "types.h"

typedef struct NtguiWindowTask NtguiWindowTask;
struct NtguiWindowTask {
    s32 flags;
    s32 handle;
    s32 state;
    s32 reserved0C;
    s32 frame;
    void (*start)(NtguiWindowTask *);
    s32 (*update)(NtguiWindowTask *);
    s32 data;
};

extern void func_00131560(void *task, s32 flags, s32 start, s32 update, s32 data);
extern s32 func_00131580(NtguiWindowTask *task);
extern void func_00131760(s32 handle);

#endif
