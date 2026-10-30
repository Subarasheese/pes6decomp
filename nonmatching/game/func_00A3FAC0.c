/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_009B3070(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
s32 func_00AA3540(void *);                          /* extern */
s32 func_00AB4850(void *, s32, s32, s32);           /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A3FAC0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    f32 temp_f3;
    f32 var_f2;
    s32 temp_a0;
    s32 temp_a2_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u32 temp_ret;
    u32 temp_ret_2;
    u8 temp_a2;
    void *temp_v1_2;

    if (arg3 != 0) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
        var_s0 = ((0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x78) & 0x7F, 0x1EU)) * 0x14) & 0xFFFF;
        temp_a2_2 = temp_a2 * 0x6900;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + temp_a2_2)), u8 *, 0x68) & 1 & 1)) {
            var_v0_2 = func_00AB4850(arg0, var_s0 & 0xFFFF, temp_a2_2, temp_a2 * 0xF);
            goto block_4;
        }
    } else {
        var_v0_2 = (0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U)) * 0xA;
block_4:
        var_s0 = var_v0_2 & 0xFFFF;
    }
    var_s0_2 = (var_s0 + arg2) & 0xFFFF;
    if (M2C_FIELD(arg0, s32 *, 0x23C) == 0x800) {
        var_s0_2 = (var_s0_2 + ((func_00BBB8C0(0x1000) + 0x1800) & 0xFFFF)) & 0xFFFF;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) >= (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
        var_s0_2 = (var_s0_2 + ((((0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7A) & 0x7F, 0x1EU)) * 0xC) + 0x100) & 0xFFFF)) & 0xFFFF;
    }
    if (M2C_FIELD(arg0, u8 *, 0x25) == 0) {
        if (func_00AA3540(arg0) < 0x10000) {
            goto block_14;
        }
    } else {
block_14:
        var_s0_2 = (var_s0_2 + 0x1400) & 0xFFFF;
    }
    if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) < 0x20) {
        temp_v1 = func_009B3070((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF;
        var_s0_2 = (var_s0_2 + ((((0x2000 - temp_v1) / 10) + ((u32) (0x2000 - temp_v1) >> 0x1F)) & 0xFFFF)) & 0xFFFF;
    }
    temp_f3 = fabsf(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30));
    if (var_s0_2 >= 0) {
        var_f2 = (f32) var_s0_2;
    } else {
        var_f2 = 2.0f * (f32) (((u32) var_s0_2 >> 1) | (var_s0_2 & 1));
    }
    temp_f1 = var_f2 + ((32.0f * temp_f3) / 188.0f);
    if (temp_f1 >= 2.1474836e9f) {
        var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_v1 = (s32) temp_f1;
    }
    var_s0_3 = var_v1 & 0xFFFF & 0xFFFF;
    temp_v1_2 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
    if (!(M2C_FIELD(temp_v1_2, u8 *, 0x86) & 1)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1000) {
            temp_ret = func_00288670(M2C_FIELD(temp_v1_2, u8 *, 0x7A) & 0x7F, 0x1EU);
            temp_s1 = 0x10 - ((temp_ret / 25) + (temp_ret >> 0x1F));
            var_v0_3 = var_s0_3 + (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) * temp_s1) & 0xFFFF);
            goto block_35;
        }
    } else {
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1000) {
            temp_ret_2 = func_00288670(M2C_FIELD(temp_v1_2, u8 *, 0x7A) & 0x7F, 0x1EU);
            temp_s1_2 = 0x10 - ((temp_ret_2 / 25) + (temp_ret_2 >> 0x1F));
            var_s0_3 = (var_s0_3 + (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) * temp_s1_2) & 0xFFFF)) & 0xFFFF;
        }
        temp_a0 = var_s0_3 & 0xFFFF;
        var_v0_3 = ((temp_a0 * 7) / 10) + ((u32) (temp_a0 * 7) >> 0x1F);
block_35:
        var_s0_3 = var_v0_3 & 0xFFFF;
    }
    if (((M2C_FIELD(arg0, s32 *, 0x1C) < 0x1701) || ((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x20)) && ((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x30)) {
        var_v0 = arg1 + (func_00BBB7F0(var_s0_3 & 0xFFFF) & 0xFFFF);
    } else if (((((arg1 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001) {
        var_v0 = arg1 - (func_00BBB8C0(var_s0_3 & 0xFFFF) & 0xFFFF);
    } else {
        var_v0 = arg1 + (func_00BBB8C0(var_s0_3 & 0xFFFF) & 0xFFFF);
    }
    return var_v0 & 0xFFFF;
}
