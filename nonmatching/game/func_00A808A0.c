/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern s32 func_009B33A0(void *, s32, s32);
s32 func_00A518A0(void *, s32, s32, s32, s32, u16, M2C_UNK); /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E4[];

s32 func_00A808A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    void *temp_v0;

    temp_s0 = func_009B30B0(arg3, arg4) & 0xFFFF;
    if (((arg1 >= 0x201) || (((0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < arg2) && (M2C_FIELD(arg0, u16 *, 0x3A) == 0))) && (arg2 >= 0x1A00)) {
        if (M2C_FIELD(arg0, s32 *, 0x98) != 1) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg3) & 0xFFFF) >= 0x70) {
                temp_v0 = ((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current;
                if (func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C)) < 0x10001U) {
                    return 3;
                }
            }
            goto block_7;
        }
block_7:
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x98);
        if (temp_a2 != 1) {
            if ((arg1 < 0x200) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C))) {
                temp_v1 = temp_s0 & 0xFFFF;
                if ((temp_v1 >= 0x20) && (temp_v1 < 0x60)) {
                    return 4;
                }
            }
            goto block_10;
        }
block_10:
        if (temp_a2 != 1) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x78) {
                return 3;
            }
            goto block_13;
        }
block_13:
        return 0;
    }
    if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x42), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x30) {
        return 4;
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) != 1) {
        if (arg1 < 0x200) {
            temp_a1 = temp_s0 & 0xFFFF;
            if ((temp_a1 >= 0x20) && (arg2 < (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) && ((temp_a1 >= 0x28) || (arg2 < 0x1000))) {
                return 4;
            }
            goto block_48;
        }
block_48:
        if (arg1 < 0x281) {
            if (arg2 >= (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
                return func_00A518A0(arg0, arg1, arg2, arg3, arg4, M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E), 1);
            }
            return 4;
        }
        return 2;
    }
    if ((arg1 < 0x180) && (M2C_FIELD(arg0, u16 *, 0x3A) != 4)) {
        temp_s0_2 = temp_s0 & 0xFFFF;
        if (temp_s0_2 >= 0x16) {
            if (M2C_FIELD(arg0, u8 *, 0x41) == 0) {
                if (arg2 < 0x1300) {
                    goto block_26;
                }
                goto block_28;
            }
block_26:
            if ((0x1500 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
                return 4;
            }
            goto block_28;
        }
block_28:
        if (arg2 < 0x1000) {
            if ((func_009B30B0(arg3, (s32) M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < temp_s0_2) {
                return 4;
            }
            goto block_31;
        }
block_31:
        return 2;
    }
    if (arg2 < 0x1000) {
        if ((func_009B30B0(arg3, (s32) M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < (temp_s0 & 0xFFFF)) {
            return 4;
        }
        goto block_35;
    }
block_35:
    if ((arg2 >= 0xE00) && (M2C_FIELD(arg0, u16 *, 0x3A) == 2)) {
        return 2;
    }
    if (arg1 < 0x100) {
        if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x32), arg3) & 0xFFFF) >= 0x2C) && (arg2 < 0xF00)) {
            return 4;
        }
        if ((arg2 < 0x1100) && ((func_009B30B0(arg3, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x78)) {
            return 4;
        }
        goto block_41;
    }
block_41:
    if (arg2 < 0x1500) {
        if (((func_009B30B0(arg4, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x50) && ((temp_s0 & 0xFFFF) >= 0x60)) {
            return 3;
        }
        goto block_44;
    }
block_44:
    return 2;
}
