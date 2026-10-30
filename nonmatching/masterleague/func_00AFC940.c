/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00223C10(void);
s32 func_00224D90(s32, s32);                        /* extern */
extern void *D_003E77B0;

void func_00AFC940(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_v0;

    temp_s0 = func_00225820() & 0xFF;
    var_s2 = 0;
    var_s1 = 0;
    do {
        temp_v0 = func_00223C10();
        if ((temp_v0 != NULL) && (func_00224D90(temp_s0, var_s2 & 0xFF) & 0xFFFF)) {
            temp_a0 = *temp_v0 & 0xF;
            if ((temp_a0 != 4) && (temp_a0 != 3) && (temp_a0 != 2)) {

            } else {
                var_s1 += 1;
            }
        }
        var_s2 += 1;
    } while (var_s2 < 0x20);
    if (var_s1 < 0x10) {
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8);
    }
}
