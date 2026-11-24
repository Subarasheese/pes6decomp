/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_bank.h"

extern u32 sceSifSetDma(sceSifDmaData *list, s32 count);
extern sceSifDmaData D_0058C620;

u32 func_00255BA0(s32 source, s32 destination, s32 size) {
    FlushCache(0);
    D_0058C620.data = (void *)source;
    D_0058C620.addr = (void *)destination;
    D_0058C620.size = size;
    D_0058C620.mode = 0;
    return sceSifSetDma(&D_0058C620, 1);
}
