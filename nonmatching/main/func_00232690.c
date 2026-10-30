/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00236930(s32, s32, s64, u16, u8);          /* extern */

s32 func_00232690(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_3;
    s64 temp_a2;
    s64 temp_s2;
    s64 temp_s3;
    s64 temp_v0;
    s64 temp_v0_4;
    s64 temp_v1;
    s64 temp_v1_2;
    u16 temp_a0_2;
    u16 temp_a3;
    u8 temp_a1;
    u8 temp_a4;
    void *temp_a0;
    void *temp_v0_2;

    temp_s1 = arg1 & 0xFF;
    temp_s0 = arg0 & 0xFF;
    if (func_00231240() != 1) {
        temp_a0 = ((temp_s0 & 0xFF) * 0xC) + arg2;
        temp_v0_2 = ((temp_s1 & 0xFF) * 0xC) + arg2;
        temp_a3 = M2C_FIELD(temp_a0, u16 *, 0);
        temp_a4 = M2C_FIELD(temp_a0, u8 *, 7);
        temp_a1 = M2C_FIELD(temp_v0_2, u8 *, 7);
        temp_a2 = temp_a3 - M2C_FIELD(temp_a0, u16 *, 2);
        temp_a0_2 = M2C_FIELD(temp_v0_2, u16 *, 0);
        temp_s2 = (s64) ((s64) temp_a0_2 << 0x30) >> 0x30;
        temp_s3 = (s64) ((temp_a0_2 - M2C_FIELD(temp_v0_2, u16 *, 2)) << 0x30) >> 0x30;
        if ((s32) temp_a1 < (s32) temp_a4) {
            return 1;
        }
        if ((s32) temp_a4 >= (s32) temp_a1) {
            temp_v0_3 = func_00236930(temp_s0, temp_s1, temp_a2, temp_a3, temp_a4);
            switch (temp_v0_3) {                    /* irregular */
            case 1:
                return 1;
            case -1:
                return -1;
            default:
                temp_v1_2 = (s64) (temp_s2 << 0x30) >> 0x30;
                temp_v0_4 = (s64) (((s64) ((s64) temp_a3 << 0x30) >> 0x30) << 0x30) >> 0x30;
                if (temp_v1_2 >= temp_v0_4) {
                    if (temp_v0_4 >= temp_v1_2) {
                        temp_v1 = (s64) (temp_s3 << 0x30) >> 0x30;
                        temp_v0 = (s64) (((s64) (temp_a2 << 0x30) >> 0x30) << 0x30) >> 0x30;
                        if (temp_v1 >= temp_v0) {
                            return -(temp_v0 < temp_v1);
                        }
                        return 1;
                    }
                    return -1;
                }
                return 1;
            }
        } else {
            return -1;
        }
    } else {
        return 0;
    }
}
