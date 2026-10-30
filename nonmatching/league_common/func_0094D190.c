/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224520(s32, s32);                      /* extern */
s32 func_00224D90(s32, s32);                        /* extern */
M2C_UNK func_0094CFE0(s32, s32);                    /* extern */

void func_0094D190(s32 arg0) {
    s32 var_s1;
    void *temp_v0;

    if ((arg0 & 0xFF) != 0xFF) {
        var_s1 = 0;
        do {
            temp_v0 = func_00224520(arg0, var_s1);
            if ((temp_v0 != NULL) && (func_00224D90(arg0, var_s1) & 0xFFFF)) {
                func_0094CFE0(arg0, var_s1);
                M2C_FIELD(temp_v0, u8 *, 3) = (u8) ((M2C_FIELD(temp_v0, u8 *, 3) & ~0xE0) | ((0 & 7) << 5));
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x20);
    }
}
