/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s64);
extern s32 func_002AE670(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
extern char D_005926D8[];
extern char Pes6MatchSquads[];

void func_00A7EC90(void *arg0, s32 arg1) {
    f32 temp_f1;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    u32 temp_s0;
    u32 temp_s3;
    u32 temp_v0;
    u8 temp_v1_3;

    temp_f1 = -(*(f32 *)D_005926D8);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_v1 = (s32) temp_f1;
    } else {
        var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    M2C_FIELD(arg0, u8 *, 0x62) = (u8) (var_v1 & 0xFF);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x62) >= 9) {
        M2C_FIELD(arg0, u8 *, 0x62) = 8U;
    }
    temp_s1 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
    if ((temp_s1 < 0x51) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x1000U)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_v1 < 0x1000) {
            M2C_FIELD(arg0, u8 *, 0x62) = 0U;
        } else {
            temp_v1_2 = temp_v1 - 0x1000;
            var_v0 = temp_v1_2 >> 0xB;
            if (temp_v1_2 < 0) {
                var_v0 = (s32) (temp_v1_2 + 0x7FF) >> 0xB;
            }
            goto block_17;
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801) {
        temp_s0 = temp_s1 & 0xFFFF;
        temp_s3 = temp_s0 >> 5;
        M2C_FIELD(arg0, u8 *, 0x62) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) + ((temp_s3 + func_00BBB8C0((s32) temp_s3)) & 0xFF));
        if (temp_s1 >= 0x70) {
            var_v0 = M2C_FIELD(arg0, u8 *, 0x62) + ((temp_s0 >> 4) & 0xFF);
block_17:
            M2C_FIELD(arg0, u8 *, 0x62) = (u8) var_v0;
        }
    }
    if (func_00BBB780((s64) (((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7F) & 0x7F) - 0x14) << 0x30) >> 0x30) != 0) {
        temp_v1_3 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7F);
        M2C_FIELD(arg0, u8 *, 0x62) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) - (func_00BBB8C0(((temp_v1_3 & 0x7F) / 20) + ((u32) (temp_v1_3 & 0x7F) >> 0x1F)) & 0xFF));
    }
    temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U);
    M2C_FIELD(arg0, u8 *, 0x62) = (u8) (M2C_FIELD(arg0, u8 *, 0x62) + ((((0x63 - temp_v0) / 20) + ((u32) (0x63 - temp_v0) >> 0x1F)) & 0xFF));
    if ((s32) M2C_FIELD(arg0, u8 *, 0x62) >= 0x80) {
        M2C_FIELD(arg0, u8 *, 0x62) = 0U;
    }
    M2C_FIELD(arg0, u8 *, 0x62) = func_002AE670((s32) M2C_FIELD(arg0, u8 *, 0x62));
}
