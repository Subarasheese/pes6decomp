/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_009B3070(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
s32 func_00AB4820(void *, M2C_UNK, s32);            /* extern */
s32 func_00AD9920(void *);                          /* extern */
extern char Pes6MatchSquads[];

s32 func_00A90760(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s1;
    u8 temp_a2_2;
    void *temp_a2;

    temp_s1 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x76) & 0x7F, 0x28U);
    temp_a2 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = 0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x76) & 0x7F, 0x28U);
    var_s2 = 0;
    if (M2C_FIELD(temp_a2, u16 *, 0x30) == 0x307) {
        var_s2 = 0x800 & 0xFFFF;
    }
    if ((0x1B00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0xA4)) {
        var_s2 = ((temp_s0 * 0xC) + 0x100) & 0xFFFF;
    }
    temp_a2_2 = M2C_FIELD(arg0, u8 *, 0x12);
    if (M2C_FIELD(temp_a2, u8 *, 0x2D) != (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2_2 * 0x6900))), u8 *, 0x68) & 1 & 1)) {
        var_s2 = (var_s2 + ((func_00AB4820(arg0, 0x800, temp_a2_2 * 0x69) + 0x200) & 0xFFFF)) & 0xFFFF;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0x801) && (func_00AD9920(arg0) != 0)) {
        var_s2 = (var_s2 + ((temp_s0 * 0xA) & 0xFFFF)) & 0xFFFF;
    }
    var_s2_2 = (((var_s2 + (((s32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) / (s32) ((temp_s1 / 5) + (temp_s1 >> 0x1F) + 8)) & 0xFFFF)) & 0xFFFF) + ((temp_s0 * 0xA) & 0xFFFF)) & 0xFFFF;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x307) {
        temp_v1 = (var_s2_2 & 0xFFFF) * (func_00BBB8C0(0x100) + 0x180);
        var_v0_2 = temp_v1 >> 8;
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 0xFF) >> 8;
        }
        var_s2_2 = var_v0_2 & 0xFFFF;
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) >= 0x1901) {
        if (func_00BBB8C0(4) != 0) {
            if ((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x20) {
                goto block_14;
            }
            goto block_16;
        }
        goto block_14;
    }
block_14:
    if ((func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x20) {
        var_v0 = arg1 + (func_00BBB7F0(var_s2_2 & 0xFFFF) & 0xFFFF);
    } else {
block_16:
        if (((((arg1 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001) {
            var_v0 = arg1 - (func_00BBB8C0(var_s2_2 & 0xFFFF) & 0xFFFF);
        } else {
            var_v0 = arg1 + (func_00BBB8C0(var_s2_2 & 0xFFFF) & 0xFFFF);
        }
    }
    return var_v0 & 0xFFFF;
}
