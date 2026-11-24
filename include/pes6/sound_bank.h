#ifndef PES6_SOUND_BANK_H
#define PES6_SOUND_BANK_H

#include "pes6/sound_driver.h"

typedef struct {
    s32 type, format, size, offset, reserved10[2], bankAddress, bank;
    u32 flags;
} SoundBankBlock;
typedef struct {
    s32 asset;
    u32 phase, transferPhase;
    s32 reserved0c, source, module;
    void *playlist;
    s32 playlistPhase, reserved20;
    u32 entry;
    SoundBankBlock *file, *block;
    s32 offset, buffer;
} SoundBankContext;
enum {
    SOUND_BANK_TRANSFER_READY = 0x2200001b,
    SOUND_BANK_ACK_TRANSFER = 0x2200001c,
    SOUND_BANK_SET_BANK = 0x2200001f,
    SOUND_BANK_SET_TRANSFER_SIZE = 0x22000021,
    SOUND_BANK_SET_TRANSFER_ADDRESS = 0x22000025,
    SOUND_BANK_SET_BANK_ADDRESS = 0x22000030
};
extern SoundBankContext D_0058C5E0;
extern s32 func_00255B90(u32 transfer);
extern u32 func_00255BA0(s32 source, s32 destination, s32 size);
static inline s32 acknowledgeTransfer(void) {
    if (func_0024FB20(SOUND_BANK_TRANSFER_READY, 0, 0, 0)) {
        func_0024FB20(SOUND_BANK_ACK_TRANSFER, 0, 0, 0);
        return 1;
    }
    return 0;
}

#endif
