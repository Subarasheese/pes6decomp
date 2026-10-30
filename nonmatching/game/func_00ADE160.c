/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00BC03A0(u16);                             /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

void func_00ADE160(void *arg0, s32 arg1, s32 arg2) {
    s16 var_v0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s2;
    s8 var_v1;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a2;
    u16 temp_v0_3;
    u8 temp_a0;
    void *temp_a1;

    var_s2 = arg2;
    temp_v1 = func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
    if ((var_s2 & 0xFFFF) < temp_v1) {
        var_s2 = temp_v1;
    }
    temp_s0 = var_s2 & 0xFFFF;
    temp_v0 = func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30));
    if ((temp_v0 != 0x19) && (temp_v0 != 6) && (temp_v0 != 0x12)) {

    } else if ((var_s2 & 0xFFFF) >= 0x10) {
        var_s2 = 0x10;
    }
    temp_v1_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) (((temp_v1_2 * -0x40) / 183) + ((u32) (temp_v1_2 * -0x40) >> 0x1F))) {
        temp_v1_3 = func_00BBB8C0(6) + 0xA;
        temp_v0_2 = var_s2 & 0xFFFF;
        var_s2 = (((temp_v0_2 * temp_v1_3) / 10) + ((u32) (temp_v0_2 * temp_v1_3) >> 0x1F)) & 0xFFFF;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x16) == 4) && (M2C_FIELD(arg0, u8 *, 0x221) & 1)) {
        var_s1 = 1;
    } else {
        var_s1 = 0;
    }
    temp_a2 = M2C_FIELD(arg0, u16 *, 0x26);
    temp_a3 = arg1 & 0xFFFF;
    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a1, u8 *, 0x2D);
    if (temp_a0 != ((((temp_a2 - temp_a3) + 0x10000) & 0xFFFF) < 0x8001)) {
        var_s2 = (((var_s2 & 0xFFFF) * 2) + 8) & 0xFFFF;
    }
    if (!(M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 0xC) & 2) && (var_s1 == 0)) {
        if ((temp_s0 & 0xFFFF) >= 0x19) {
            var_v1 = (((temp_a3 - temp_a2) + 0x10000) & 0xFFFF) < 0x8001;
        } else {
            var_v1 = temp_a0 ^ 1;
        }
        M2C_FIELD(Pes6Ball_Current, s8 *, 0x6C) = var_v1;
    } else {
        M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C) = temp_a0;
    }
    temp_s0_2 = (var_s2 & 0xFFFF) * 4;
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) = (u16) ((0x100 - temp_s0_2) - func_00BBB8C0(temp_s0_2 + 0x30));
    temp_v0_3 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
    if (((s32) temp_v0_3 < 0x39) || ((s32) temp_v0_3 >= 0x800)) {
        M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) = 0x38U;
    }
    if (var_s1 != 0) {
        temp_a0_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
        var_v0 = ((temp_a0_2 * 0x19) / 10) + ((u32) (temp_a0_2 * 0x19) >> 0x1F);
        goto block_27;
    }
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xC) & 2) {
        temp_a0_3 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
        var_v0 = ((temp_a0_3 * 0xD) / 10) + ((u32) (temp_a0_3 * 0xD) >> 0x1F);
block_27:
        M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = var_v0;
    }
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) = (u16) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) + (func_00BBB8C0((s32) ((u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) >> 3)) & 0xFFFF));
}
