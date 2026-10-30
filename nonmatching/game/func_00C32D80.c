/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(s32);                          /* extern */
s32 func_00BAC710(u16, void *);                     /* extern */
s32 func_00C35500(u8, void *);                      /* extern */

s32 func_00C32D80(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    u16 temp_a0_2;
    void *temp_a1;

    temp_a1 = *func_00B2A420(arg0 & 0xFF);
    var_v0 = 0;
    if (M2C_FIELD(temp_a1, u8 *, 0x16) == 0x2E) {
        temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x18);
        switch (temp_a0) {                          /* irregular */
        case 38:
            return 0x64;
        case 33:
            return 0x3C;
        case 18:
            return 0x64;
        case 2:
            temp_a0_2 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30);
            if ((s32) temp_a0_2 < 0x59A) {
                temp_v0 = func_00C35500(M2C_FIELD(temp_a1, u8 *, 0x12), temp_a1);
                if ((temp_v0 != 5) && (temp_v0 != 4)) {
                    return 0x1E;
                }
                goto block_25;
            }
            temp_v0_2 = func_00BAC710(temp_a0_2, temp_a1);
            if ((temp_v0_2 != 0x1B6) && (temp_v0_2 != 0x1B5)) {
                return 0x1E;
            }
block_25:
            var_v0 = 0x50;
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        return var_v0;
    }
}
