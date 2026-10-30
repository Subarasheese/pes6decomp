/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520220;

void func_001902D0(s8 arg0, s32 arg1) {
    s32 var_a0;
    void *var_a1;

    if (D_00520220 != NULL) {
        M2C_FIELD(D_00520220, s8 *, 0) = arg0;
        M2C_FIELD(D_00520220, s8 *, 1) = 0;
        M2C_FIELD(D_00520220, s8 *, 2) = 0;
        if (arg1 == 1) {
            var_a0 = 0;
            var_a1 = D_00520220 + 0x1C;
            do {
                M2C_FIELD(var_a1, s8 *, 0) = 0;
                var_a0 += 6;
                M2C_FIELD(var_a1, s8 *, 0x448) = 0;
                M2C_FIELD(var_a1, s8 *, 0x890) = 0;
                M2C_FIELD(var_a1, s8 *, 0xCD8) = 0;
                M2C_FIELD(var_a1, s8 *, 0x1120) = 0;
                M2C_FIELD(var_a1, s8 *, 0x1568) = 0;
                var_a1 += 0x19B0;
            } while (var_a0 < 0xC);
        }
    }
}
