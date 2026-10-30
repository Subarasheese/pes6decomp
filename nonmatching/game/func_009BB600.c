/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s64);
extern s32 func_002AE670(s32);
extern s32 func_009B3070(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
s32 func_009B3190(s32, s32, M2C_UNK, s32);          /* extern */
s32 func_009CD6E0(void *, s32);                     /* extern */
extern void *Pes6Ball_Current;
extern char D_00592260[];
extern char D_005926D8[];
extern char Pes6MatchSquads[];

s32 func_009BB600(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    u8 temp_a3;

    temp_a3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
    temp_s1 = (M2C_FIELD(arg0, u16 *, 0x2C) - ((arg1 & 0xFFFF) * ((temp_a3 != 0) ? -1 : 1))) & 0xFFFF;
    if ((arg2 != 0) && ((*(s32 *)D_00592260) >= 0x2D)) {
        temp_a0 = func_00BBB8C0(0x10) + 0x90;
        temp_v1 = (*(s32 *)D_00592260) - 0x2C;
        var_v0_2 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 1) >> 1;
        }
        temp_v1_2 = (var_v0_2 + temp_a0) * (func_009B3070(temp_s1, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF);
        var_v0 = temp_v1_2 >> 8;
        if (temp_v1_2 < 0) {
            var_v0 = (s32) (temp_v1_2 + 0xFF) >> 8;
        }
        return func_009B3190(func_009B32D0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_s1, var_v0 & 0xFFFF) & 0xFFFF, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0x7200, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) ^ 1) & 0xFFFF;
    }
    temp_s2 = func_009B3190(temp_s1, (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1) & 0xFFFF, 0x6800, temp_a3 ^ 1) & 0xFFFF;
    temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
    if (temp_v0 < 0x33) {
        var_v0_3 = 5;
    } else if (temp_v0 >= 0x60) {
        var_v0_3 = -1;
    } else if (temp_v0 >= 0x5B) {
        var_v0_3 = 0;
    } else if (temp_v0 < 0x51) {
        var_v0_3 = 2;
    } else {
        var_v0_3 = 1;
    }
    if ((((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_3 + 0x30)) || !(func_00BBB780((s64) ((M2C_FIELD(arg0, u8 *, 0x60) + 0xA) << 0x30) >> 0x30) & 0xFF)) && !(func_00BBB780((s64) ((M2C_FIELD(arg0, u8 *, 0x60) - 0x14) << 0x30) >> 0x30) & 0xFF)) {
        temp_s1_2 = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1;
        temp_a0_2 = func_00BBB8C0(0x800) + 0x400;
        temp_v1_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        var_v0_4 = temp_v1_3 >> 4;
        if (temp_v1_3 < 0) {
            var_v0_4 = (s32) (temp_v1_3 + 0xF) >> 4;
        }
        var_v0_5 = temp_s2 - ((temp_s1_2 * (var_v0_4 + temp_a0_2)) & 0xFFFF);
    } else {
        temp_s1_3 = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1;
        temp_v1_4 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) * (func_00BBB8C0(0x10) + 0x10);
        var_v0_6 = temp_v1_4 >> 8;
        if (temp_v1_4 < 0) {
            var_v0_6 = (s32) (temp_v1_4 + 0xFF) >> 8;
        }
        var_v0_5 = temp_s2 - ((temp_s1_3 * (var_v0_6 + 0x400)) & 0xFFFF);
    }
    var_s2 = var_v0_5 & 0xFFFF;
    if (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) - 0xA) << 0x30) >> 0x30) == 0) {
        temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
        if (temp_v0_2 < 0x33) {
            var_v0_7 = 5;
        } else if (temp_v0_2 >= 0x60) {
            var_v0_7 = -1;
        } else if (temp_v0_2 >= 0x5B) {
            var_v0_7 = 0;
        } else if (temp_v0_2 < 0x51) {
            var_v0_7 = 2;
        } else {
            var_v0_7 = 1;
        }
        if (((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_7 + 0x20)) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0)) & 0xFFFF) < 0x50)) {
            temp_v0_3 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
            if (temp_v0_3 < 0x33) {
                var_v0_8 = 5;
            } else if (temp_v0_3 >= 0x60) {
                var_v0_8 = -1;
            } else if (temp_v0_3 >= 0x5B) {
                var_v0_8 = 0;
            } else if (temp_v0_3 < 0x51) {
                var_v0_8 = 2;
            } else {
                var_v0_8 = 1;
            }
            if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_8 + 0x1C))) {
                temp_s1_4 = (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0);
                if (temp_s1_4 < ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) * 0xA) + 0x6000)) {
                    goto block_61;
                }
            }
        } else {
            goto block_61;
        }
    } else {
block_61:
        var_s2 = func_009CD6E0(arg0, var_s2) & 0xFFFF;
    }
    return var_s2;
}
