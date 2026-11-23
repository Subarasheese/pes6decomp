/* compiler: ee-gcc-2.9-G0 */
/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright (c) 2009 jimmikaelkael
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
*/
/* McDataChecksum in ps2dev/ps2sdk, iop/memorycard/mcman/src/main.c. */
#include "types.h"
extern const u8 D_00374660[];
void func_00116DB0(const u8 *data, u8 *out) {
    s32 line = 0, complement = 0, parity = 0, index = 0;
    do {
        s32 val = D_00374660[*data++];
        parity ^= val;
        if (val & 0x80) {
            complement ^= ~index;
            line ^= index;
        }
    } while (++index < 128);
    out[0] = ~parity & 0x77;
    out[1] = ~complement & 0x7f;
    out[2] = ~line & 0x7f;
}
