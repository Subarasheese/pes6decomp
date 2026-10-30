/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
s32 func_00151EA0(M2C_UNK);                         /* extern */
extern char D_00CBA8C0[];
extern char D_00CE5360[];

void func_00BCB970(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 *var_s0;
    u16 temp_v1;

    if ((M2C_FIELD(arg0, u8 *, 0x2C) != 0) && (M2C_FIELD(arg0, u16 *, 0x30) == 0x5EB)) {
        var_s0 = ((void *)D_00CBA8C0) + ((*(s32 *)D_00CE5360) * 0xC);
        if (func_00207D80(arg0, (s32) M2C_FIELD(var_s0, u16 *, 0xA)) != 0) {
            if ((arg1 == 0) && ((M2C_FIELD(var_s0, s32 *, 4) == 0) || !(func_00151EA0(0xA) & 0xFFFF))) {
                if (M2C_FIELD(var_s0, s32 *, 0) != 0x28) {
                    var_s0 += 0xC;
                } else {
                    var_s0 = ((void *)D_00CBA8C0);
                }
                (*(s32 *)D_00CE5360) = *var_s0;
            }
            temp_v1 = M2C_FIELD(var_s0, u16 *, 8);
            M2C_FIELD(arg0, s16 *, 0x34) = 0;
            if ((s32) temp_v1 >= 0) {
                var_f0 = (f32) temp_v1;
            } else {
                var_f0 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
            }
            M2C_FIELD(arg0, f32 *, 0x38) = var_f0;
        }
    }
}
