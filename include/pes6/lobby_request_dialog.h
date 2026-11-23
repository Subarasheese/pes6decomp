#ifndef PES6_LOBBY_REQUEST_DIALOG_H
#define PES6_LOBBY_REQUEST_DIALOG_H
#include "pes6/netlib_confirmation.h"
#include "pes6/lobby_request.h"

extern s32 func_0083BE40(u8 value);
extern s32 func_0083BFA0(u8 value);
extern s32 func_0083C270(u8 value);

static inline void netlib_dialog_mode_0088a930(s32 mode) {
    NetworkDialogState *state = &D_0088A930;
    if (state)
        state->mode3C = mode;
}
static inline void netlib_dialog_mode_0088ab70(s32 mode) {
    NetworkDialogState *state = &D_0088AB70;
    if (state)
        state->mode3C = mode;
}
static inline void netlib_dialog_mode_0088adb0(s32 mode) {
    NetworkDialogState *state = &D_0088ADB0;
    if (state)
        state->mode6C = mode;
}

#endif
