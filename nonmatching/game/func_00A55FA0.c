/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s64);
extern s32 func_00A1FE80(s32, s32);
extern u32 func_00288670(u32, u32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern u32 func_00A9BA00(void *);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_00952420(void *, u16, M2C_UNK, M2C_UNK);   /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E70[];
extern char Pes6MatchSquads[];

s32 func_00A55FA0(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u32 temp_v0_2;
    u32 temp_v0_4;

    temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U);
    temp_s2 = func_00BBB8C0(((0x63 - temp_v0_2) / 3) + ((u32) (0x63 - temp_v0_2) >> 0x1F));
    temp_s0 = (s32) func_001CD9E0((f32) func_00A9BA00(arg0));
    temp_s1 = temp_s0 / (s32) (0x300 - func_00BBB8C0(0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U)));
    var_s2_2 = temp_s2 + (func_00BBB8C0(8) - 8 + temp_s1);
    temp_v0_3 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    if (temp_v0_3 >= 0xB5) {
        var_s2_2 -= (s32) (temp_v0_3 - 0xB4) / (s32) (func_00BBB8C0(3) + 3);
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    var_s1 = (s32) ((*(f32 *)D_00591E70) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC));
    switch (temp_v1) {                              /* irregular */
    case 0x92:
    case 0x83:
    case 0x77:
        temp_v0 = func_00A1FE80(var_s2_2, 0x18);
        if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) <= (*(f32 *)D_00591E70))) {
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) = (f32) (*(f32 *)D_00591E70);
        }
        if (temp_v0 >= 0x31) {
            return 0x30;
        }
        return temp_v0;
    case 0x96:
        if (var_s1 > 0) {
            var_s2 = func_00A1FE80(var_s2_2, var_s1);
        } else {
            var_s2 = func_00A13E50(var_s2_2, var_s1);
        }
block_20:
        if (var_s1 < 0x18) {
            goto block_21;
        }
        if (var_s2 < 0x18) {
            var_s2 = func_00BBB8C0(0x18) + 0x18;
        } else {
block_21:
            if (var_s1 >= -0x18) {
                goto block_22;
            }
            if (var_s2 >= -0x1F) {
                var_s2 = -0x20 - func_00BBB8C0(0x10);
            } else {
block_22:
                if (var_s1 >= -0x18) {
                    goto block_23;
                }
                if (var_s2 >= -0xF) {
                    var_s2 = -0x10 - func_00BBB8C0(0x10);
                } else {
block_23:
                    if (var_s1 < -8) {
                        var_a1 = var_s1 >> 1;
                        if (var_s1 < 0) {
                            var_a1 = (s32) (var_s1 + 1) >> 1;
                        }
                        var_s2 = func_00A13E50(var_s2, var_a1);
                    }
                }
            }
        }
        if (var_s1 > 0) {

        } else {
            var_s1 = -var_s1;
        }
        if (var_s1 < 9) {
            if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) < 0x21) {
                var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                if (var_v0 > 0) {

                } else {
                    var_v0 = -var_v0;
                }
                if (var_v0 >= 0xBC1) {
                    var_s2 = (s32) ((-M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) * (f32) (func_00BBB8C0(4) + 5)) / 1880.0f);
                } else {
                    goto block_37;
                }
            } else {
block_37:
                if (var_s2 < 0x11) {
                    if (var_s2 < -0x10) {
                        var_s2 = func_00BBB7F0(8) - 0x10;
                    }
                } else {
                    var_s2 = func_00BBB7F0(8) + 0x10;
                }
            }
        }
        if (var_s2 >= 0x31) {
            var_s2 = 0x30;
        }
        return var_s2;
    default:
        if (var_s1 >= 0) {
            var_a1_2 = var_s1 >> 1;
            if (var_s1 < 0) {
                var_a1_2 = (s32) (var_s1 + 1) >> 1;
            }
            temp_s0_2 = func_00A1FE80(var_s2_2, var_a1_2);
            if (var_s1 >= 0x14) {
                if (var_s1 >= 0x24) {
                    goto block_16;
                }
                if (func_00BBB780((s64) ((M2C_FIELD(arg0, u8 *, 0x5F) - 0x50) << 0x30) >> 0x30) != 0) {
                    goto block_17;
                }
block_16:
                var_v0_2 = var_s1 + 0xC + func_00BBB8C0(0x20);
            } else {
block_17:
                if (var_s1 < 0x10) {
                    goto block_18;
                }
                if (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U) << 0x30) >> 0x30) == 0) {
                    if (var_s1 >= 0x10) {
                        if (var_s1 < 0x18) {
                            var_v0_2 = var_s1 + func_00BBB8C0(var_s1 * 2);
                        } else {
                            temp_s2_2 = var_s1 * 2;
                            var_v0_2 = temp_s2_2 + func_00BBB8C0(temp_s2_2);
                        }
                    } else {
                        var_v0_2 = func_00BBB8C0(var_s1 * 2);
                    }
                } else {
block_18:
                    temp_v0_4 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U);
                    var_v0_2 = var_s1 + func_00BBB8C0(((0x63 - temp_v0_4) / 10) + ((u32) (0x63 - temp_v0_4) >> 0x1F));
                }
            }
            var_s2 = temp_s0_2 + var_v0_2;
        } else {
            temp_v0_5 = -var_s1;
            var_a1_3 = temp_v0_5 >> 1;
            if (temp_v0_5 < 0) {
                var_a1_3 = (s32) (temp_v0_5 + 1) >> 1;
            }
            temp_s2_3 = func_00A13E50(var_s2_2, var_a1_3);
            if ((var_s1 < -8) && ((var_s1 < -0x18) || (func_00BBB780((s64) ((M2C_FIELD(arg0, u8 *, 0x5F) - 0x28) << 0x30) >> 0x30) != 0))) {
                var_s2 = temp_s2_3 + (func_00BBB8C0(0xC) - 0x1C);
                if ((var_s2 >= -0xF) && (temp_s0 < 0x800) && (M2C_FIELD(arg0, u8 *, 0x25) == 0) && (func_00952420(arg0, M2C_FIELD(Pes6Ball_Current, u16 *, 0x5C), 0x2000, 0x40000) != 0)) {
                    temp_v0_6 = func_00BBB8C0(8);
                    var_a0 = temp_s0 >> 7;
                    if (temp_s0 < 0) {
                        var_a0 = (s32) (temp_s0 + 0x7F) >> 7;
                    }
                    var_s2 -= (0x10 - var_a0) + temp_v0_6;
                }
            } else if ((var_s1 < -8) && (func_00BBB780((s64) ((M2C_FIELD(arg0, u8 *, 0x5F) - 0x28 + (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) << 0x38) >> 0x3F) * 0xA)) << 0x30) >> 0x30) != 0)) {
                var_s2 = temp_s2_3 - func_00BBB8C0(0xC);
            } else {
                var_s2 = temp_s2_3 + (func_00BBB8C0(8) + 4);
            }
        }
        goto block_20;
    }
}
