/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00824700(s32, s32, s32);                   /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
s32 func_00936B90();                                /* extern */
extern s32 D_003E7BC4;

s32 func_00958A40(s64 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s64 temp_s1;
    void *temp_v1;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        return D_003E7BC4;
    }
    if (temp_s0 != 0) {
        temp_s1 = (s64) (arg0 << 0x38) >> 0x38;
        if (temp_s1 < 0) {
            return D_003E7BC4;
        }
        if (temp_s1 < 3) {
            if (func_0082C8A0(0xA) == 0) {
                return D_003E7BC4;
            }
            temp_v0_2 = func_0082C2A0();
            if (temp_v0_2 == 0) {
                goto block_29;
            }
            if (temp_s1 >= 0) {
                if (temp_s1 < 3) {
                    if (func_0082C8A0(0xA) != 0) {
                        temp_v1 = (temp_s1 * 0x64) + temp_v0_2;
                        if (M2C_FIELD(temp_v1, s32 *, 0x486C) != 0) {
                            var_a0 = M2C_FIELD(temp_v1, s32 *, 0x4874);
                        } else {
                            goto block_29;
                        }
                    } else {
                        goto block_29;
                    }
                } else {
                    var_a0 = -1;
                }
            } else {
block_29:
                var_a0 = -1;
            }
            temp_a1 = temp_v0 + (temp_s1 * 8);
            return func_00824700(var_a0, temp_a1, temp_a1 + 0x18);
        }
        return D_003E7BC4;
    }
    return D_003E7BC4;
}
