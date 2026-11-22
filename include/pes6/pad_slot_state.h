#ifndef PES6_PAD_SLOT_STATE_H
#define PES6_PAD_SLOT_STATE_H
#include "types.h"
typedef struct {
    u8 reserved00[0x58];
    s32 frame;
    u8 reserved5C[8], modeCount, reserved65, modeFlags, reserved67[9];
    u8 state, requestState, currentTask, reserved73[13];
} Pes6PadDmaRecord;
typedef struct {
    Pes6PadDmaRecord *area;
    u8 reserved04[12];
    s32 open;
    u8 reserved14[8];
} Pes6PadSlotState;
#endif
