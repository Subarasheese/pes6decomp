#ifndef PES6_NTGUI_TEXT_TIMER_H
#define PES6_NTGUI_TEXT_TIMER_H

#include "types.h"
typedef struct {
    s32 x, y;
} NtTextPoint;
typedef struct {
    u8 reserved00[4];
    u32 flags;
    u8 reserved08[0x1c - 8];
    s32 position;
    u8 reserved20[4];
} NtTextRow;
typedef struct {
    u8 reserved00[0x98];
    s32 state;
    s32 focus;
    u8 reserveda0[0x4f4 - 0xa0];
    NtTextPoint point;
    u8 reserved4fc[0x5d4 - 0x4fc];
    s32 origin;
    u8 reserved5d8[0x604 - 0x5d8];
    u32 repeatPeriod;
    u8 reserved608[0x910 - 0x608];
    s32 activeText;
    u8 reserved914[0xb80 - 0x914];
    NtTextRow *rows;
    u8 reservedb84[8];
    s32 selectedRow;
    u8 reservedb90[8];
    s32 endPosition;
    u8 reservedb9c[0xba8 - 0xb9c];
    u8 cursorRect[0x20];
    s32 cursorVisible;
    u8 reservedbcc[0xbf0 - 0xbcc];
    s32 rowCount, scrollOffset;
    u8 reservedbf8[0xc8c - 0xbf8];
    s32 cursorTimer, repeatTimer;
    u8 reservedc94[0xcc8 - 0xc94];
    u32 cursorPeriod;
    u8 reservedccc[0xcf0 - 0xccc];
    s32 scrollOrigin;
    u8 reservedcf4[0xd00 - 0xcf4];
    s32 cursorEnabled;
    s32 reservedd04, scrollStep, reservedd0c, rowActive;
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

extern s32 func_001745A0(NtTextTimer *, s32 row);
extern void func_00173B38(NtTextTimer *);
extern void func_00173BE8(NtTextTimer *);
extern void func_00174380(NtTextTimer *);
extern void func_00173E10(NtTextTimer *);
extern void func_00173CF0(NtTextTimer *);
#endif
