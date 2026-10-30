/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00236930(s32, s32, u8, s64, s64, u8);      /* extern */

s32 func_00232CD0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s64 temp_a0_3;
    s64 temp_a0_4;
    s64 temp_a3;
    s64 temp_a4;
    s64 temp_v0_2;
    s64 temp_v0_3;
    u16 temp_a0_2;
    u16 temp_a4_2;
    u8 temp_a2;
    u8 temp_a5;
    void *temp_a0;
    void *temp_v0;

    temp_s1 = arg1 & 0xFF;
    temp_s0 = arg0 & 0xFF;
    if (func_00231240() != 1) {
        temp_a0 = ((temp_s0 & 0xFF) * 0xC) + arg2;
        temp_v0 = ((temp_s1 & 0xFF) * 0xC) + arg2;
        temp_a4_2 = M2C_FIELD(temp_a0, u16 *, 0);
        temp_a5 = M2C_FIELD(temp_a0, u8 *, 7);
        temp_a2 = M2C_FIELD(temp_v0, u8 *, 7);
        temp_a3 = (s64) ((s64) temp_a4_2 << 0x30) >> 0x30;
        temp_a0_2 = M2C_FIELD(temp_v0, u16 *, 0);
        temp_a4 = (s64) ((temp_a4_2 - M2C_FIELD(temp_a0, u16 *, 2)) << 0x30) >> 0x30;
        if ((s32) temp_a2 < (s32) temp_a5) {
            return 1;
        }
        if ((s32) temp_a5 >= (s32) temp_a2) {
            temp_a0_3 = (s64) (((s64) ((temp_a0_2 - M2C_FIELD(temp_v0, u16 *, 2)) << 0x30) >> 0x30) << 0x30) >> 0x30;
            temp_v0_2 = (s64) (temp_a4 << 0x30) >> 0x30;
            if (temp_a0_3 >= temp_v0_2) {
                if (temp_v0_2 >= temp_a0_3) {
                    temp_a0_4 = (s64) (((s64) ((s64) temp_a0_2 << 0x30) >> 0x30) << 0x30) >> 0x30;
                    temp_v0_3 = (s64) (temp_a3 << 0x30) >> 0x30;
                    if (temp_a0_4 >= temp_v0_3) {
                        if (temp_v0_3 >= temp_a0_4) {
                            return func_00236930(temp_s0, temp_s1, temp_a2, temp_a3, temp_a4, temp_a5);
                        }
                        return -1;
                    }
                    return 1;
                }
                return -1;
            }
            return 1;
        }
        return -1;
    }
    return 0;
}
