/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00C042D0(void);
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001C7F58(void *, s32);                 /* extern */
s32 func_00BC4C70(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00BF3910(s32);                             /* extern */

void func_00BF7B60(void *arg0, s32 arg1) {
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *var_a0;
    s32 *var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0 != NULL) {
        func_001C48E8(0, 0x4A4);
        if (arg1 & 1) {
            var_s2 = 1;
            M2C_FIELD(arg0, s32 *, 0) = 0x11C;
        }
        if (arg1 & 2) {
            temp_v0 = arg0 + (var_s2 * 4);
            var_s2 += 1;
            *temp_v0 = 0x11D;
        }
        if (arg1 & 4) {
            temp_v0_2 = arg0 + (var_s2 * 4);
            var_s2 += 1;
            *temp_v0_2 = 0x112;
        }
        if (arg1 & 8) {
            var_s1 = 0x113;
            var_s0 = arg0 + (var_s2 * 4);
            do {
                if (func_00BF3910(var_s1) != 0) {
                    var_s2 += 1;
                    *var_s0 = var_s1 & 0xFFFF;
                    var_s0 += 4;
                }
                var_s1 = (var_s1 + 1) & 0xFFFF;
            } while (var_s1 < 0x118);
        }
        if ((arg1 & 0x10) && ((func_00C042D0() & 0xFFFF) > 0)) {
            temp_v0_3 = arg0 + (var_s2 * 4);
            var_s2 += 1;
            *temp_v0_3 = 0x11A;
        }
        if (var_s2 < 0x14) {
            var_a0 = arg0 + (var_s2 * 4);
            do {
                var_s2 += 1;
                *var_a0 = 0xFFFF;
                var_a0 += 4;
            } while (var_s2 < 0x14);
        }
        M2C_FIELD(arg0, s32 *, 0x4A0) = 0x4EA6;
        func_001C7F58(arg0 + 0xA0, func_00BC4C70(0x11B, 0, 1));
    }
}
