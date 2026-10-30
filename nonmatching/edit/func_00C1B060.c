/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
extern s32 func_002F82B0(s32, s32);
void *func_002F8120(s32, s32);                      /* extern */
M2C_UNK func_00C1B270();                            /* extern */

void func_00C1B060(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s2;
    void *var_v0;

    if (arg1 == 1) {
        func_00C1B270();
        return;
    }
    var_s2 = 0;
    do {
        temp_s0 = func_002F82B0(arg0, var_s2);
        if ((arg0 & 0xFFFF) == 0x126) {
            var_v0 = func_002F8120(func_002371A0(arg0) & 0xFFFF, var_s2);
        } else {
            var_v0 = func_002F8120(arg0, var_s2);
        }
        var_s2 += 1;
        M2C_FIELD(temp_s0, u8 *, 0x3A) = (u8) M2C_FIELD(var_v0, u8 *, 0x3A);
        M2C_FIELD(temp_s0, u8 *, 0x3B) = (u8) M2C_FIELD(var_v0, u8 *, 0x3B);
        M2C_FIELD(temp_s0, u8 *, 0x3C) = (u8) M2C_FIELD(var_v0, u8 *, 0x3C);
        M2C_FIELD(temp_s0, u8 *, 0x3D) = (u8) M2C_FIELD(var_v0, u8 *, 0x3D);
        M2C_FIELD(temp_s0, s8 *, 0x33) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x35) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x38) = (u8) M2C_FIELD(var_v0, u8 *, 0x38);
        M2C_FIELD(temp_s0, u8 *, 0x39) = (u8) M2C_FIELD(var_v0, u8 *, 0x39);
    } while (var_s2 < 4);
}
