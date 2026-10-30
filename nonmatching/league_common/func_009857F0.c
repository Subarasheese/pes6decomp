/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00225B20(s32);                             /* extern */

void func_009857F0(void) {
    s8 var_s1;
    void *temp_v0;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        var_s1 = 0;
        M2C_FIELD(temp_v0, s8 *, 1) = -1;
loop_2:
        if (func_00225B20(var_s1 & 0xFF) != 1) {
            var_s1 += 1;
            if (var_s1 >= 0x48) {

            } else {
                goto loop_2;
            }
        } else {
            M2C_FIELD(temp_v0, s8 *, 1) = var_s1;
        }
    }
}
