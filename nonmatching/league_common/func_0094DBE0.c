/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0094D930(s32, s32);
void *func_00224520(s32, s32);                      /* extern */
s32 func_00224D90(s32, s32);                        /* extern */

void func_0094DBE0(void) {
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        if (func_00224D90(var_s1 & 0xFF, var_s0 & 0xFF) & 0xFFFF) {
            temp_v0 = func_00224520(var_s1 & 0xFF, var_s0 & 0xFF);
            if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u8 *, 1) == 0)) {
                func_0094D930(var_s1 & 0xFF, var_s0 & 0xFF);
            }
        }
        var_s0 += 1;
        if (var_s0 < 0x20) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x50);
}
