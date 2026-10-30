/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001A55A0(void *);
M2C_UNK func_001A5388(s32);                         /* extern */
s32 func_001A5880();                                /* extern */

s32 func_001A5CA8(u32 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_s0, s32 *, 8)) {
            if (M2C_FIELD((void *)0x5CBB98, s32 *, 0x1C) != arg0) {
                var_v0 = 0;
                if (M2C_FIELD(temp_s0, s32 *, 0xC) & 1) {
                    temp_v0 = func_001A5880();
                    temp_a1 = M2C_FIELD(temp_s0, s32 *, 0xC);
                    M2C_FIELD(temp_s0, s64 *, 0x18) = (s64) (M2C_FIELD(temp_s0, s64 *, 0x18) + (temp_v0 - M2C_FIELD(temp_s0, s64 *, 0x10)));
                    M2C_FIELD(temp_s0, s32 *, 0xC) = (s32) (temp_a1 & 0xFFFFFFFE);
                    if (temp_a1 & 2) {
                        func_001A55A0((void *) temp_s0);
                        func_001A5388(temp_v0);
                    }
                    var_v0 = 1;
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
