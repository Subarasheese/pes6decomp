/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00A9B980(void *);
s32 func_00AA3540();                                /* extern */

s32 func_00A64070(void *arg0) {
    u16 temp_v0_2;
    u8 temp_v0;

    if (func_00AA3540() < 0x01000001) {
        if (func_00A9B980(arg0) < 0x01900001) {
            goto block_16;
        }
        goto block_3;
    }
block_3:
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v0 != 0x41) && (temp_v0 != 0xA) && (temp_v0 != 0x25) && (temp_v0 != 0x28)) {
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1A);
        if ((temp_v0_2 != 0x41) && (temp_v0_2 != 0xA) && (temp_v0_2 != 0x25) && (temp_v0_2 != 0x28)) {
            return 0;
        }
        goto block_16;
    }
block_16:
    return 1;
}
