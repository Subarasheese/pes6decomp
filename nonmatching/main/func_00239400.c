/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022C1E0(void);
void func_00239400(s32 arg0) {
    s32 temp_a0;
    s8 var_a1;
    void *temp_s0;

    temp_s0 = func_0022C1E0();
    if (func_00231240() != 1) {
        temp_a0 = arg0 & 0xFF;
        var_a1 = 0;
        if (temp_a0 > 0) {
            do {
                if (var_a1 < 0x60) {
                    M2C_FIELD((temp_s0 + var_a1), s8 *, 0xC4) = var_a1;
                }
                var_a1 += 1;
            } while (var_a1 < temp_a0);
        }
    }
}
