/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_0095ABE0(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_0082C2A0();
    temp_s0 = func_00936B90();
    if (temp_s1 != 0) {
        if (temp_s0 != 0) {
            temp_a0 = temp_s0 + 0x3F1A4;
            if ((temp_a0 != 0) && ((temp_s1 + 0x14550) != 0)) {
                func_001C48E8(temp_a0, 0, 0x51C);
                func_001C4730(temp_s0 + 0x3F1A4, temp_s1 + 0x14550, 0x298);
                func_001C8590(temp_s0 + 0x3F43C, temp_s0 + 0x3F1D0, 0x40);
                func_001C8590(temp_s0 + 0x3F4BE, temp_s0 + 0x3F228, 0xFF);
            }
            return 4;
        }
        goto block_4;
    }
block_4:
    return 1;
}
