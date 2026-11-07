/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FD790(void *arg0) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s64 temp_a1_3;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_4;
    u8 *temp_a1_5;
    u8 *temp_v1_3;
    u8 *temp_v1_4;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x18) - 0x38;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 0x38);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1;
    if (temp_v1 < 0x39) {
        do {
            temp_a1 = M2C_FIELD(arg0, u8 **, 0x14);
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_2 = temp_a1 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1 << (0x38 - temp_a3)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_2;
            if ((u32) temp_a1_2 >= (u32) M2C_FIELD(arg0, u32 *, 0x20)) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0 = temp_a3 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
        } while (temp_v0 < 0x39);
    }
    temp_a1_3 = M2C_FIELD(arg0, s64 *, 8) + 0x38;
    M2C_FIELD(arg0, s64 *, 8) = temp_a1_3;
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x18) - 0x28;
    M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 0x28);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v1_2;
    if (temp_v1_2 < 0x39) {
        do {
            temp_a1_4 = M2C_FIELD(arg0, u8 **, 0x14);
            temp_a3_2 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_a1_5 = temp_a1_4 + 1;
            M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_a1_4 << (0x38 - temp_a3_2)));
            M2C_FIELD(arg0, u8 **, 0x14) = temp_a1_5;
            if ((u32) temp_a1_5 >= (u32) M2C_FIELD(arg0, u32 *, 0x20)) {
                M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
            }
            temp_v0_2 = temp_a3_2 + 8;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_2;
        } while (temp_v0_2 < 0x39);
    }
    M2C_FIELD(arg0, s64 *, 8) = (s64) (temp_a1_3 + 0x28);
    if (((u64) M2C_FIELD(arg0, u64 *, 0) >> 0x3F) == 1) {
loop_16:
        M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) << 0x18);
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x18) - 0x18;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_3;
        if (temp_v0_3 < 0x39) {
            do {
                temp_v1_3 = M2C_FIELD(arg0, u8 **, 0x14);
                temp_a3_3 = M2C_FIELD(arg0, s32 *, 0x18);
                temp_v1_4 = temp_v1_3 + 1;
                M2C_FIELD(arg0, u64 *, 0) = (u64) (M2C_FIELD(arg0, u64 *, 0) | ((s64) *temp_v1_3 << (0x38 - temp_a3_3)));
                M2C_FIELD(arg0, u8 **, 0x14) = temp_v1_4;
                if ((u32) temp_v1_4 >= (u32) M2C_FIELD(arg0, u32 *, 0x20)) {
                    M2C_FIELD(arg0, u8 **, 0x14) = (u8 *) M2C_FIELD(arg0, u8 **, 0x1C);
                }
                temp_v0_4 = temp_a3_3 + 8;
                M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_4;
            } while (temp_v0_4 < 0x39);
        }
        M2C_FIELD(arg0, s64 *, 8) = (s64) (M2C_FIELD(arg0, s64 *, 8) + 0x18);
        if (((u64) M2C_FIELD(arg0, u64 *, 0) >> 0x3F) == 1) {
            goto loop_16;
        }
    }
    return 1;
}
