/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB780(s64);
extern s32 func_009B9BA0(void *);
extern s32 func_00A1FE80(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00A9E080(void *, s32, u16, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_005926D8[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

void func_009CDDF0(void *arg0, s32 arg1) {
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 var_v1;
    u32 temp_s0;

    temp_s0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U);
    var_s3 = (arg1 - ((((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE) & 0xFFFF)) & 0xFFFF;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801) && (M2C_FIELD(arg0, u16 *, 0x18) == 0x10) && ((func_009B30B0(var_s3, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x39)) {
        var_s3 = (s32) M2C_FIELD(arg0, u16 *, 0x28);
        M2C_FIELD(arg0, s16 *, 0x26) = (s16) (var_s3 + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE));
    }
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3C);
    var_s2 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), var_s3) & 0xFFFF;
    if ((temp_a0 != 0x1A3) && (temp_a0 != 0x3E8) && (temp_a0 != 0x1A7)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x600) {
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) var_s3;
            goto block_9;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) var_s3;
block_9:
        var_s2 = 0;
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_a0_2) {                            /* irregular */
    case 0x13D:
    case 0x13E:
    case 0x13F:
        var_s1 = (temp_s0 * 5) + 0x400;
        break;
    case 0x165:
    case 0x16B:
    case 0x258:
    case 0x296:
        var_s1 = M2C_FIELD(arg0, s32 *, 0x1C) + (temp_s0 * 2);
        break;
    default:
        if (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) - 0x14) << 0x30) >> 0x30) != 0) {
            goto block_21;
        }
        if ((*(f32 *)D_005926D8) < (f32) ((*(u8 *)D_005926F4) + func_009B9BA0(arg0))) {
            var_s1 = (temp_s0 * 5) + 0x600;
        } else {
block_21:
            var_s1 = (temp_s0 * 0xA) + 0xA00;
        }
        break;
    }
    temp_s0_2 = var_s2 & 0xFFFF;
    if (temp_s0_2 < 0x41) {
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_a0_3 != 0x165) && (temp_a0_3 != 0x16B) && (temp_a0_3 != 0x258) && (temp_a0_3 != 0x296)) {
            if (M2C_FIELD(arg0, s32 *, 0xA4) < 0x180) {
                temp_v0 = func_00A9E080(arg0, var_s3, M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, s32 *, 0x1C), 0x40, 0);
                if (temp_v0 >= 0x1401) {
                    var_s1 = temp_v0 - 0x400;
                }
            } else {
                var_s1 = func_00A9E080(arg0, var_s3, M2C_FIELD(arg0, u16 *, 0x28), func_00A1FE80(M2C_FIELD(arg0, s32 *, 0x1C), 0xC00), 0x40, 0);
            }
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) var_s3;
        }
    }
    if (temp_s0_2 < 0x60) {
        goto block_33;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v1 >= 0x801) {
        if (temp_v1 < 0x600) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v1 - 0x600);
        }
        var_v1 = M2C_FIELD(arg0, u16 *, 0x18) + 1;
        goto block_39;
    }
block_33:
    if ((temp_s0_2 >= 0x41) && (temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C), ((temp_v1_2 < 0x801) == 0))) {
        if (temp_v1_2 < 0x600) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v1_2 - 0x600);
        }
        var_v1 = M2C_FIELD(arg0, u16 *, 0x18) + 1;
block_39:
        M2C_FIELD(arg0, u16 *, 0x18) = var_v1;
    } else {
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) var_s3;
        M2C_FIELD(arg0, s32 *, 0x1C) = var_s1;
        M2C_FIELD(arg0, s32 *, 0x1C) = func_00A13E50(M2C_FIELD(arg0, s32 *, 0x1C), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
    }
}
