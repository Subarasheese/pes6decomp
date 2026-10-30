/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B0CB8[];

s32 func_001054F0(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = arg0 >> 0x1D;
    if (temp_v1 != 3) {
        if (temp_v1 < 4U) {
            if (temp_v1 != 2) {
                return 1;
            }
            if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) >= 0x40) {
                M2C_FIELD(((void *)D_011B0CB8), s32 *, 0xC) = -1;
                return 0;
            }
            M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) * 0x10) + ((void *)D_011B0CB8)), u32 *, 0x38) = arg0;
            M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) * 0x10) + (((void *)D_011B0CB8) + 0xC)), s32 *, 0x30) = arg1;
            M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x40) = arg2;
            M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x44) = arg3;
            temp_v1_2 = M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) + 1;
            M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) = temp_v1_2;
            if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 0xC) < temp_v1_2) {
                M2C_FIELD(((void *)D_011B0CB8), s32 *, 0xC) = temp_v1_2;
            }
            goto block_30;
        }
        if (temp_v1 != 4) {
            return 1;
        }
        if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) >= 0x40) {
            M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x34) = -1;
            return 0;
        }
        M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) * 0x10) + ((void *)D_011B0CB8)), u32 *, 0x838) = arg0;
        M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x83C) = arg1;
        M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x840) = arg2;
        M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x844) = arg3;
        temp_a0 = M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) + 1;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) = temp_a0;
        if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x34) < temp_a0) {
            M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x34) = temp_a0;
        }
        goto block_30;
    }
    if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) >= 0x40) {
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x20) = -1;
        return 0;
    }
    M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) * 0x10) + ((void *)D_011B0CB8)), u32 *, 0x438) = arg0;
    M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x43C) = arg1;
    M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x440) = arg2;
    M2C_FIELD(((M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) * 0x10) + ((void *)D_011B0CB8)), s32 *, 0x444) = arg3;
    temp_a0_2 = M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) + 1;
    M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) = temp_a0_2;
    if (M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x20) < temp_a0_2) {
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x20) = temp_a0_2;
    }
block_30:
    return 1;
}
