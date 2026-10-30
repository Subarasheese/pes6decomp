/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_002260A0(void);
s32 func_00224BC0(s32, s32);                        /* extern */
void *func_00224E20(s32, u8);                       /* extern */
s32 func_00230410();                                /* extern */

s32 func_0094B600(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_s3 = arg0 & 0xFFFF;
        if (temp_s3 != 0) {
            temp_s2 = arg1 & 0xFF;
            if (temp_s2 < 0x48) {
                var_s0_2 = 0;
loop_12:
                if (temp_s3 != (func_00224BC0(arg1, var_s0_2 & 0xFF) & 0xFFFF)) {
                    var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
                    if (var_s0_2 >= 0x20) {
                        goto block_29;
                    }
                    goto loop_12;
                }
                temp_v0_2 = func_00224E20(arg1, func_002243B0(arg1, var_s0_2 & 0xFF));
                if (temp_v0_2 != NULL) {
                    temp_s4 = ((u64) ((s64) M2C_FIELD(temp_v0_2, u16 *, 6) << 0x30) >> 0x35) & 0xFFFF;
                    if (func_00230410() != 1) {
                        temp_v1 = ((temp_s4 & 0xFFFF) * 0x1A) + temp_v0;
                        if ((temp_s3 == M2C_FIELD(temp_v1, u16 *, 0x19B20)) && (temp_s2 == M2C_FIELD(temp_v1, u8 *, 0x19B22))) {
                            return temp_s4;
                        }
                        M2C_FIELD(temp_v0_2, u16 *, 6) = (u16) ((M2C_FIELD(temp_v0_2, u16 *, 6) & 0xFFFF001F) | 0x8000);
                        return 0x400;
                    }
                    if (temp_s3 != M2C_FIELD((((temp_s4 & 0xFFFF) * 0x1A) + temp_v0), u16 *, 0x19B20)) {
                        M2C_FIELD(temp_v0_2, u16 *, 6) = (u16) ((M2C_FIELD(temp_v0_2, u16 *, 6) & 0xFFFF001F) | 0x8000);
                        return 0x400;
                    }
                    return temp_s4;
                }
block_29:
                var_s0 = 0;
loop_30:
                if (func_00230410() != 1) {
                    temp_v1_2 = temp_v0 + ((var_s0 & 0xFFFF) * 0x1A);
                    if ((temp_s3 == M2C_FIELD(temp_v1_2, u16 *, 0x19B20)) && (temp_s2 == M2C_FIELD(temp_v1_2, u8 *, 0x19B22))) {
                        return var_s0;
                    }
                    goto block_38;
                }
                if (temp_s3 == M2C_FIELD((temp_v0 + ((var_s0 & 0xFFFF) * 0x1A)), u16 *, 0x19B20)) {
                    return var_s0;
                }
block_38:
                var_s0 = (var_s0 + 1) & 0xFFFF;
                if (var_s0 >= 0x400) {
                    goto block_39;
                }
                goto loop_30;
            }
            goto block_39;
        }
        goto block_39;
    }
block_39:
    return 0x400;
}
