#ifndef PES6_SLOT_CHANNELS_H
#define PES6_SLOT_CHANNELS_H

#include "types.h"

typedef struct {
    u8 channel[2];
} SlotChannels;

extern s32 func_00148690(s32 slot, SlotChannels *options);

#endif
