#ifndef PES6_NTGUI_TEXT_TIMER_H
#define PES6_NTGUI_TEXT_TIMER_H

#include "types.h"
typedef struct {
    u8 reserved00[0x9c];
    s32 focus;
    u8 reserveda0[0x604 - 0xa0];
    u32 repeatPeriod;
    u8 reserved608[0x910 - 0x608];
    s32 activeText;
    u8 reserved914[0xba8 - 0x914];
    u8 cursorRect[0x20];
    s32 cursorVisible;
    u8 reservedbcc[0xc8c - 0xbcc];
    s32 cursorTimer, repeatTimer;
    u8 reservedc94[0xcc8 - 0xc94];
    u32 cursorPeriod;
    u8 reservedccc[0xd00 - 0xccc];
    s32 cursorEnabled;
} NtTextTimer;
extern void *func_00165B00(NtTextTimer *);
extern void func_00167C38(void *manager, s32 timer);
typedef void (*NtTimerCallback)(s32 timer, s64 user);
extern s32 func_00167BB8(void *manager, u64 delay, NtTextTimer *user, NtTimerCallback callback);
extern void func_00189778(void *rect);
extern void func_001747A0(NtTextTimer *widget);
extern void func_00173718(NtTextTimer *widget, s32 active);
extern void func_00173648(s32 timer, s64 user);
extern void func_001736C0(s32 timer, s64 user);
extern void (*D_005C14CC)(NtTextTimer *widget, s32 focused);

#endif
