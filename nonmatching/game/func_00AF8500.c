/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_00A13E50(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00AFB7C0(void *, s32, s32);            /* extern */
extern char D_00591E19[];
extern char D_005926D8[];
extern char D_005926EC[];

void func_00AF8500(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 var_f0;
    f32 var_f0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u16 temp_a0_2;
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    var_s1 = arg3;
    if ((temp_v1 != 0x1A5) && (temp_v1 != 0x114)) {
        goto block_6;
    }
    if (((arg2 & 0xFFFF) < 0x2001) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >= 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((M2C_FIELD(arg0, u16 *, 0x28) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1000);
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        func_00209A00(temp_a0, 0x114, (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) & 0xFFFF);
        M2C_FIELD(arg0, s8 *, 0x41) = 3;
        return;
    }
block_6:
    if ((M2C_FIELD(arg0, u8 *, 0x63) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1901)) {
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19)) {
            if ((s32) (*(u8 *)D_005926EC) >= 0) {
                var_f0 = (f32) (*(u8 *)D_005926EC);
            } else {
                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926EC) >> 1) | ((*(u8 *)D_005926EC) & 1));
            }
            if ((*(f32 *)D_005926D8) <= var_f0) {
                var_s0 = 0x800;
            } else {
                goto block_14;
            }
        } else {
block_14:
            var_s0 = 0x1000;
        }
    } else {
        var_s0 = 0x800;
    }
    M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), var_s0);
    if ((M2C_FIELD(arg0, u8 *, 0x63) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) < (0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)))) {
        if ((s32) (*(u8 *)D_005926EC) >= 0) {
            var_f0_2 = (f32) (*(u8 *)D_005926EC);
        } else {
            var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_005926EC) >> 1) | ((*(u8 *)D_005926EC) & 1));
        }
        if (!((*(f32 *)D_005926D8) <= var_f0_2)) {
            var_s0 = 0x2000;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x28) = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), var_s0);
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_a0_2) {                            /* irregular */
    case 0x33:
    case 0xC7:
        var_s1 = func_00A13E50(var_s1, 0x1400 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
        /* fallthrough */
    default:
        if (M2C_FIELD(arg0, u8 *, 0x63) != 0) {
            var_v0 = 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
            if (var_v0 < var_s1) {
                goto block_25;
            }
        } else if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 0x31) {
            var_v0 = 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
            if (var_v0 < var_s1) {
                goto block_25;
            }
        } else {
            var_v0 = (0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) - ((u32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >> 3);
            if (var_v0 < var_s1) {
block_25:
                var_s1 = var_v0;
            }
        }
        func_00AFB7C0(arg0, var_s1, M2C_FIELD(arg0, u8 *, 0x5C) + 0x20);
        return;
    case 0x18:
    case 0x198:
    case 0x12:
        return;
    }
}
