/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);                        /* extern */
M2C_UNK func_001D7A20(s32, f32 *, s32);             /* extern */
M2C_UNK func_001ED880(s32, f32);                    /* extern */
M2C_UNK func_001EDA30(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
s32 func_001EE0D0();                                /* extern */
M2C_UNK func_001EEE60(s32, s8 *);                   /* extern */
s32 func_00957640(s32, s32, s32, f32 *, s32);       /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_009570E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp70;
    f32 sp74;
    s8 sp8C;
    s8 sp8D;
    s8 sp8E;
    s8 sp8F;
    f32 *var_v1;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0x10;
    var_v1 = &sp70;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 != 0) {
        temp_f20 = func_001D79A0(arg0, arg3);
        func_001D7A20(arg0, &sp70, arg3);
        sp70 += 3.0f;
        sp74 += 3.0f;
        temp_v0 = func_001EE0D0();
        func_001EDAE0(temp_v0, 1);
        func_001EDA30(temp_v0, 1);
        func_001ED880(temp_v0, 1.0f + temp_f20);
        temp_a0 = func_00957640(temp_v0, arg1, arg2, &sp70, arg4);
        sp8C = 0;
        sp8F = 0xFF;
        sp8E = 0;
        sp8D = 0;
        func_001EEE60(temp_a0, &sp8C);
        return temp_v0;
    }
    return 0;
}
