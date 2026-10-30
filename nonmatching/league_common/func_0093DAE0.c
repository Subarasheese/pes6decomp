/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003DF3A0[];

void func_0093DAE0(s32 arg0, s16 *arg1) {
    s16 *var_a1;
    s16 var_a4;
    u16 temp_a2;

    var_a1 = arg1;
    var_a4 = 0;
    do {
        temp_a2 = M2C_FIELD((((void *)D_003DF3A0) + ((var_a4 & 0xFFFF) * 0x10)), u16 *, 0xE);
        if ((arg0 == (((s32) temp_a2 >> 0xC) & 0xF)) && !(temp_a2 & 2) && !(temp_a2 & 4)) {
            if (var_a1 != NULL) {
                *var_a1 = var_a4;
                var_a1 += 2;
            }
        }
        var_a4 = (var_a4 + 1) & 0xFFFF;
    } while (var_a4 < 0x128);
}
