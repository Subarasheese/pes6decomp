/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
extern u8 func_002243B0(s32, s32);
u8 *func_00224520(s32, s32);                        /* extern */
extern s32 D_003EAF08;

void func_00B76DE0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    u8 *temp_v0;
    u8 temp_a0;

    temp_s0 = D_003EAF08;
    temp_s1 = func_00225820() & 0xFF;
    if ((temp_s0 != 0) && (func_00228A80() != NULL)) {
        var_s2 = 0;
        do {
            temp_v0 = func_00224520(temp_s1 & 0xFF, func_002243B0(temp_s1 & 0xFF, var_s2 & 0xFF) & 0xFF);
            temp_a0 = M2C_FIELD((temp_s0 + var_s2), u8 *, 0x3D3);
            if ((s32) temp_a0 >= 0xC) {
                *temp_v0 = (*temp_v0 & ~0xF0) | ((0 & 0xF) * 0x10);
            } else {
                *temp_v0 = (*temp_v0 & ~0xF0) | ((temp_a0 & 0xF) * 0x10);
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
    }
}
