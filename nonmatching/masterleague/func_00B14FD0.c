/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
void *func_00994C60(s32, s32);                      /* extern */

void *func_00B14FD0(s32 arg0) {
    s32 temp_s1;
    s32 var_s2;
    void *temp_v0;

    temp_s1 = func_00225820() & 0xFF;
    var_s2 = 0;
loop_1:
    temp_v0 = func_00994C60(temp_s1, var_s2 & 0xFF);
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) == (arg0 & 0xFFFF))) {
        return temp_v0;
    }
    var_s2 = (var_s2 + 1) & 0xFF;
    if (var_s2 >= 0x25) {
        return NULL;
    }
    goto loop_1;
}
