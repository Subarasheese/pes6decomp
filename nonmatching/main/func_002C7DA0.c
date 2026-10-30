/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002C8220(s8 *, u8);                    /* extern */
M2C_UNK func_002C96C0(s8 *, s32, s8 *);             /* extern */

void func_002C7DA0(s8 *arg0, s8 *arg1) {
    s8 sp40;
    s8 sp41;
    s8 sp42;
    s8 sp43;
    s8 sp44;
    s8 sp45;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_v1_2;
    s8 *var_a0_2;
    s8 *var_s0;
    s8 *var_v1;

    var_s0 = arg1;
    if ((arg0 != NULL) && (var_s0 != NULL)) {
        var_a0 = 0;
        var_v1 = &sp40;
        do {
            M2C_FIELD(var_v1, s8 *, 6) = 0;
            var_a0 += 7;
            M2C_FIELD(var_v1, s8 *, 7) = 0;
            M2C_FIELD(var_v1, s8 *, 8) = 0;
            M2C_FIELD(var_v1, s8 *, 9) = 0;
            M2C_FIELD(var_v1, s8 *, 0xA) = 0;
            M2C_FIELD(var_v1, s8 *, 0xB) = 0;
            M2C_FIELD(var_v1, s8 *, 0xC) = 0;
            var_v1 += 7;
        } while (var_a0 < 0xE);
        sp40 = 3;
        var_s2 = 0;
        sp41 = 0x10;
        sp42 = 0x17;
        sp43 = 0x21;
        sp44 = 0x1E;
        sp45 = 0x26;
        do {
            func_002C8220(&sp40, M2C_FIELD((var_s0 + var_s2), u8 *, 0x14));
            var_s2 += 1;
        } while (var_s2 < 0xB);
        var_v1_2 = 0x35;
        var_a0_2 = arg0;
        do {
            var_v1_2 -= 1;
            *var_a0_2 = *var_s0;
            var_s0 += 1;
            var_a0_2 += 1;
        } while (var_v1_2 > 0);
        var_s0_2 = 0;
        do {
            func_002C96C0(arg0, var_s0_2 & 0xFF, &sp40);
            var_s0_2 += 1;
        } while (var_s0_2 < 0xB);
    }
}
