/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern s32 func_002AE670(s32);
M2C_UNK func_009B36C0(void *, M2C_UNK, M2C_UNK, u16, M2C_UNK); /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00A19FE0(void *);                      /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];
extern char Pes6MatchState_Current[];
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591F24[];
extern char D_005926D8[];
extern char D_005926DE[];

s32 func_00A1A360(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 temp_a1;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f1;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    u32 temp_s0;
    u8 temp_a0;
    void *var_a2_2;

    var_s0 = 0;
    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0);
        if (temp_a0 != (*(u8 *)D_00591E19)) {
            if ((s32) (*(u8 *)D_005926DE) >= 0) {
                var_f0 = (f32) (*(u8 *)D_005926DE);
            } else {
                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926DE) >> 1) | ((*(u8 *)D_005926DE) & 1));
            }
            if ((*(f32 *)D_005926D8) <= var_f0) {
                var_s0 = 1;
            }
        }
        if ((temp_a0 != (*(u8 *)D_00591E4C)) && ((*(u8 *)D_00591E4C) != 0)) {
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            goto block_11;
        }
        goto block_15;
    }
block_11:
    if (func_00BF6280() == 0) {
        M2C_FIELD(arg0, s8 *, 0x66) = 0;
        M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 0;
    }
block_15:
    if ((*(u8 *)D_00591F24) == 2) {
        M2C_FIELD(arg0, s8 *, 0x66) = 0;
        M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 0;
    }
    if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x67) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
            func_00A19FE0(arg0);
            goto block_35;
        }
        temp_a1 = func_002AE670(arg1 & 0xFF) & 0xFF;
        var_a2 = M2C_FIELD(arg0, s32 *, 0x1C);
        temp_v0 = 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
        if (var_a2 < temp_v0) {
            var_a2 = temp_v0;
        }
        temp_s1 = temp_a1 & 0xFF;
        temp_f0 = (s32) (224.0f + ((f32) (var_a2 * (temp_s1 + 1)) / (*(f32 *)D_00591BEC)));
        temp_s0 = temp_f0 * temp_f0;
        func_009B36C0(arg0, 0x112, 0, M2C_FIELD(arg0, u16 *, 0x26), 0);
        var_a3 = 0;
        if (temp_s1 > 0) {
            var_a2_2 = Pes6Ball_Current;
loop_26:
            temp_f1 = (s32) ((*(f32 *)D_00591E6C) - M2C_FIELD(var_a2_2, f32 *, 0x47C));
            temp_f0_2 = (s32) ((*(f32 *)D_00591E74) - M2C_FIELD(var_a2_2, f32 *, 0xB7C));
            if (temp_s0 < (u32) ((temp_f1 * temp_f1) + (temp_f0_2 * temp_f0_2))) {
                var_a3 += (*(u8 *)D_005926DE);
                var_a2_2 += (*(u8 *)D_005926DE) * 4;
                if (var_a3 >= temp_s1) {
                    goto block_31;
                }
                goto loop_26;
            }
            return 1;
        }
block_31:
        goto block_35;
    }
block_35:
    return 0;
}
