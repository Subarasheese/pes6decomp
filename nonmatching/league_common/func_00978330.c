/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_009783E0(s32, s32);                        /* extern */
s32 func_009784B0(s32, s32);                        /* extern */

void func_00978330(s32 arg0) {
    s32 temp_s1;
    s32 var_s4;
    s8 temp_s2;
    void *temp_v0;

    var_s4 = 0;
    do {
        if (var_s4 != (arg0 & 0xFF)) {
            temp_s2 = func_009783E0(arg0, var_s4 & 0xFF) & 0xFF;
            temp_s1 = func_009784B0(arg0, var_s4 & 0xFF) & 0xFF;
            if (temp_s1 < 0x1F0) {
                temp_v0 = func_002260A0();
                if (temp_v0 != NULL) {
                    M2C_FIELD((temp_v0 + temp_s1), s8 *, 2) = temp_s2;
                }
            }
        }
        var_s4 += 1;
    } while (var_s4 < 0x20);
}
