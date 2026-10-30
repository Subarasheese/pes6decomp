/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B9BA0(void *);
extern s32 func_002AE670(s32);
extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00A09950(void *);
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926E8[];

s32 func_00C1EFF0(void *arg0) {
    f32 var_f0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_v1;

    var_s0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x4A) != 0) {
        temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        switch (temp_v1) {                          /* irregular */
        case 4:
            temp_v1_2 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            var_v0 = temp_v1_2 >> 0xD;
            if (temp_v1_2 < 0) {
                var_v0 = (s32) (temp_v1_2 + 0x1FFF) >> 0xD;
            }
            var_v0_2 = func_002AE670(var_v0 + 0x12 + func_009B9BA0(arg0));
            break;
        case 11:
            var_v0_2 = func_002AE670(func_009B9BA0(arg0) + 0x14);
            break;
        case 3:
            var_v0_2 = func_002AE670(func_009B9BA0(arg0) + 6);
            break;
        default:
            temp_v1_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            var_v0_3 = temp_v1_3 >> 0xD;
            if (temp_v1_3 < 0) {
                var_v0_3 = (s32) (temp_v1_3 + 0x1FFF) >> 0xD;
            }
            var_v0_2 = func_002AE670(var_v0_3 + 0x14 + func_009B9BA0(arg0));
            break;
        }
        var_v0_4 = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
        if (var_v0_4 <= 0) {
            var_v0_4 = -var_v0_4;
        }
        if (!((f32) var_v0_4 <= 704.25f)) {
            if ((func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) >= 0x40000U) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x71)) {
                return 0;
            }
            goto block_20;
        }
block_20:
        if (M2C_FIELD(arg0, u8 *, 0x16) == 0x82) {
            if ((((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) < -9241.0f) && (func_00A09950(arg0) == 1)) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x401U) {
                    if ((s32) (*(u8 *)D_005926E8) >= 0) {
                        var_f0 = (f32) (*(u8 *)D_005926E8);
                    } else {
                        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926E8) >> 1) | ((*(u8 *)D_005926E8) & 1));
                    }
                    if ((*(f32 *)D_005926D8) < var_f0) {
                        goto block_28;
                    }
                } else {
block_28:
                    if (((*(f32 *)D_005926D8) < (f32) var_v0_2) && ((*(u8 *)D_00591E4C) == 0)) {
                        goto block_35;
                    }
                }
            }
        } else {
block_35:
            var_s0 = 1;
        }
        return var_s0;
    }
    return 0;
}
