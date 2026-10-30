/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCBB20(void *arg0, void *arg1) {
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a5;
    u8 temp_a5_2;
    u8 temp_v0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x7B);
    temp_a2 = arg0 + 0x34;
    temp_v0 = M2C_FIELD(arg1, u8 *, 0x7B);
    temp_a0 = arg1 + 0x34;
    if ((((u64) ((s64) temp_v1 << 0x38) >> 0x3D) == ((u64) ((s64) temp_v0 << 0x38) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_a2, u16 *, 0x42) << 0x36) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_a0, u16 *, 0x42) << 0x36) >> 0x3D))) {
        temp_a5 = (u8) M2C_FIELD(temp_a2, u16 *, 0x42);
        temp_a4 = (u8) M2C_FIELD(temp_a0, u16 *, 0x42);
        if ((((u64) ((s64) temp_a5 << 0x3C) >> 0x3D) == ((u64) ((s64) temp_a4 << 0x3C) >> 0x3D)) && (((u64) ((s64) temp_a5 << 0x39) >> 0x3D) == ((u64) ((s64) temp_a4 << 0x39) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0x40) << 0x38) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x40) << 0x38) >> 0x3D))) {
            temp_a5_2 = M2C_FIELD(temp_a2, u8 *, 0x41);
            temp_a4_2 = M2C_FIELD(temp_a0, u8 *, 0x41);
            if (((temp_a5_2 & 7) == (temp_a4_2 & 7)) && (((u64) ((s64) (s32) M2C_FIELD(temp_a2, u8 *, 0x40) << 0x2F) >> 0x3D) == ((u64) ((s64) (s32) M2C_FIELD(temp_a0, u8 *, 0x40) << 0x2F) >> 0x3D)) && (((u64) ((s64) temp_a5_2 << 0x3A) >> 0x3D) == ((u64) ((s64) temp_a4_2 << 0x3A) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0x46) << 0x3C) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x46) << 0x3C) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_a2, s32 *, 0x44) << 0x2F) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_a0, s32 *, 0x44) << 0x2F) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_a2, u8 *, 0x43) << 0x38) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x43) << 0x38) >> 0x3D)) && ((M2C_FIELD(temp_a2, u8 *, 0x45) & 7) == (M2C_FIELD(temp_a0, u8 *, 0x45) & 7)) && (((u64) ((s64) (u8) M2C_FIELD(temp_a2, s32 *, 0x44) << 0x38) >> 0x3D) == ((u64) ((s64) (u8) M2C_FIELD(temp_a0, s32 *, 0x44) << 0x38) >> 0x3D)) && (((u64) ((s64) (u16) M2C_FIELD(temp_a2, u8 *, 0x46) << 0x36) >> 0x3D) == ((u64) ((s64) (u16) M2C_FIELD(temp_a0, u8 *, 0x46) << 0x36) >> 0x3D))) {
                if (((u64) ((s64) temp_v1 << 0x3B) >> 0x3D) == ((u64) ((s64) temp_v0 << 0x3B) >> 0x3D)) {
                    return 0;
                }
                goto block_17;
            }
        }
    }
block_17:
    return 1;
}
