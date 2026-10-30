/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_009784B0(s32, s32);                        /* extern */

void func_00978600(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    void *temp_v0;

    temp_s1 = arg0 & 0xFF;
    if (temp_s1 < 0x20) {
        var_s2 = 0;
        do {
            if (var_s2 != temp_s1) {
                temp_s0 = func_009784B0(arg0, var_s2 & 0xFF) & 0xFF;
                if (temp_s0 < 0x1F0) {
                    temp_v0 = func_002260A0();
                    if (temp_v0 != NULL) {
                        M2C_FIELD((temp_v0 + temp_s0), s8 *, 2) = 0;
                    }
                }
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
    }
}
