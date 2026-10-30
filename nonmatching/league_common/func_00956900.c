/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002297F0(s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00956900(s32 arg0) {
    s32 var_a0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;

    var_s1 = 0;
loop_1:
    temp_v0 = func_002297F0(var_s1 & 0xFF);
    if ((temp_v0 != NULL) && ((arg0 & 0xFFFF) == M2C_FIELD(temp_v0, u16 *, 0x7E))) {
        var_a0 = var_s1 & 0xFF;
    } else {
        var_s1 += 1;
        if (var_s1 >= 0x25) {
            var_a0 = 0xFF;
        } else {
            goto loop_1;
        }
    }
    if ((var_a0 & 0xFF) != 0xFF) {
        temp_v0_2 = func_002297F0(var_a0);
        if (temp_v0_2 != NULL) {
            func_001C48E8(temp_v0_2, 0, 0x80);
            M2C_FIELD(temp_v0_2, s16 *, 0x7E) = 0;
        }
    }
}
