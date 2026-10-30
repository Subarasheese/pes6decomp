/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00223C60(s32, s32);                    /* extern */
void *func_00970870(s32);                           /* extern */

void func_00978B10(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        if ((var_s0 & 0xFFFF) < 0x12B0) {
            temp_v0 = func_00970870(var_s0);
            if (temp_v0 != NULL) {
                func_00223C60(var_s0, M2C_FIELD(temp_v0, u8 *, 0x17) & 0x7F);
            }
        }
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0x12B0);
}
