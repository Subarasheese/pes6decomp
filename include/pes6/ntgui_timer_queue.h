#ifndef PES6_NTGUI_TIMER_QUEUE_H
#define PES6_NTGUI_TIMER_QUEUE_H

#include "pes6/ntgui_widget_timer.h"

typedef struct NtguiTimerNode {
    s64 remaining;
    s32 reserved08, owner;
    s64 user;
    NtTimerCallback callback;
    struct NtguiTimerNode *next;
} NtguiTimerNode;

typedef struct {
    u8 reserved00[0xfa0];
    NtguiTimerNode head;
    s64 lastTick;
} NtguiTimerQueue;

#endif
