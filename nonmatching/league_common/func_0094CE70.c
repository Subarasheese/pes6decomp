/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224520(s32, s32);                      /* extern */

void func_0094CE70(void) {
    s32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;

    var_s1 = 0;
    do {
        var_s2 = 0;
loop_2:
        if ((var_s1 & 0xFF) < 0x50) {
            temp_a1 = var_s2 & 0xFF;
            if (temp_a1 < 0x20) {
                temp_v0 = func_00224520(var_s1 & 0xFF, temp_a1);
                if (temp_v0 != NULL) {
                    M2C_FIELD(temp_v0, s8 *, 2) = 0;
                }
            }
        }
        var_s2 += 1;
        if (var_s2 < 0x20) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x50);
}
