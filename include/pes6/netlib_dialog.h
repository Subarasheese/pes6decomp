#ifndef PES6_NETLIB_DIALOG_H
#define PES6_NETLIB_DIALOG_H

#include "types.h"

typedef struct {
    u8 missingMessage;
    u8 pad01[0x3C - 1];
    s32 mode3C;
    u8 pad40[0x2C];
    s32 mode6C;
} NetworkDialogState;

extern s32 func_001F08B0(s32 message);
extern s32 func_00818740(void);
extern void func_00818750(void);
extern s32 func_00817B70(void);
extern void func_00817B80(void);
extern s32 func_00819460(s32, s32, float, float, s32, s32, s32, float, float, s32, s32, s32, s32,
                         s32, s32, s32);

static inline s32 display_network_notice(s32 message, s32 selection, s32 modal) {
    return func_00819460(0, func_001F08B0(message), 4.0f, 8.0f, 0, 0, selection, 4.0f, 1062.5f, 0,
                         1, 1, 2, 1, 3, modal);
}
extern NetworkDialogState D_0088A930;
static inline void close_dialog_0088A930(void) {
    NetworkDialogState *state = &D_0088A930;
    if (state)
        state->mode3C = 19;
    if (func_00818740() == 1)
        func_00818750();
    if (func_00817B70() == 1)
        func_00817B80();
}
extern NetworkDialogState D_0088AB70;
static inline void close_dialog_0088AB70(void) {
    NetworkDialogState *state = &D_0088AB70;
    if (state)
        state->mode3C = 14;
    if (func_00818740() == 1)
        func_00818750();
    if (func_00817B70() == 1)
        func_00817B80();
}
extern NetworkDialogState D_0088ADB0;
static inline void close_dialog_0088ADB0(void) {
    NetworkDialogState *state = &D_0088ADB0;
    if (state)
        state->mode6C = 16;
    if (func_00818740() == 1)
        func_00818750();
    if (func_00817B70() == 1)
        func_00817B80();
}
extern void func_008187D0(void);
extern void func_00817C00(void);

extern NetworkDialogState D_008A3390;
static inline void close_dialog_008A3390(void) {
    NetworkDialogState *state = &D_008A3390;
    if (state)
        state->mode3C = 17;
    if (func_00818740() == 1)
        func_008187D0();
    if (func_00817B70() == 1)
        func_00817C00();
}
#endif
