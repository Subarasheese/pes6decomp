/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_00151D80(M2C_UNK, M2C_UNK);                 /* extern */
s32 func_001B3820(void *, void *, s32, s32);        /* extern */
extern s8 D_003E98F0;

void func_001B36A0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s8 var_v0;
    s8 var_v0_2;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s8 *, 5) != 0) {
        if ((M2C_FIELD(arg1, u16 *, 0x16) == 0) && ((s32) M2C_FIELD(arg1, u8 *, 0xE) < 2) && ((s32) M2C_FIELD(arg1, u8 *, 0xF) < 2)) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) == 1) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            if (M2C_FIELD(arg1, u8 *, 0xE) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x2C) == D_003E98F0) {
                    var_v0 = func_00151D80(1, 5);
                } else {
                    var_v0 = (func_00151D80(1, 4) & 0xFFFF) + 5;
                }
                M2C_FIELD(arg0, s8 *, 0x20) = var_v0;
                var_v0_2 = 0xFF;
            } else {
                M2C_FIELD(arg0, s8 *, 0x20) = (s8) ((func_00151D80(1, 3) & 0xFFFF) + 9);
                var_v0_2 = func_00151D80(1, 2);
            }
            M2C_FIELD(arg0, s8 *, 0x21) = var_v0_2;
            M2C_FIELD(arg0, s32 *, 0x1C) = 4;
            M2C_FIELD(arg0, u8 *, 0x22) = 0U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x22) = (u8) (M2C_FIELD(arg0, u8 *, 0x22) + 1);
        }
        if ((func_001B3820(arg0, arg1, arg2, arg3) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 4)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    }
}
