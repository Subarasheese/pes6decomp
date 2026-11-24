/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_bank.h"

extern s32 sceSifDmaStat(u32 transfer);

s32 func_00255B90(u32 transfer) {
    return sceSifDmaStat(transfer);
}
