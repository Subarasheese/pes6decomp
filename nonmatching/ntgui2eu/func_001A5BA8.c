/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5388(s64);                         /* extern */
M2C_UNK func_001A5518(s32);                         /* extern */
s64 func_001A5880();                                /* extern */

s32 func_001A5BA8(u32 arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_v0;
    s64 temp_v0;

    temp_s0 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_s0, s32 *, 8)) {
            if (M2C_FIELD((void *)0x5CBB98, s32 *, 0x1C) != arg0) {
                var_v0 = 1;
                if (!(M2C_FIELD(temp_s0, s32 *, 0xC) & 1)) {
                    temp_v0 = func_001A5880();
                    M2C_FIELD(temp_s0, s64 *, 0x10) = temp_v0;
                    temp_v0_2 = M2C_FIELD(temp_s0, s32 *, 0xC) | 1;
                    M2C_FIELD(temp_s0, s32 *, 0xC) = temp_v0_2;
                    if (temp_v0_2 & 2) {
                        func_001A5518(temp_s0);
                        func_001A5388(temp_v0);
                    }
                    var_v0 = 0;
                }
                return var_v0;
            }
            return 0x80000010;
        }
        goto block_4;
    }
block_4:
    return 0x80008002;
}
