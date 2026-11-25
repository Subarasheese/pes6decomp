#ifndef PES6_NTGUI_WIDGET_TIMER_H
#define PES6_NTGUI_WIDGET_TIMER_H

#include "types.h"

typedef void (*NtTimerCallback)(s32 timer, s64 user);

extern void *func_00165B00(void *widget);
extern s32 func_00167BB8(void *manager, u64 delay, void *user, NtTimerCallback callback);
extern void func_00167C38(void *manager, s32 timer);
extern void func_00189778(void *state);

#endif
