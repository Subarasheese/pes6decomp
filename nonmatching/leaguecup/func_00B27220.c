/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BC3D0(s32, s32, s32, s32);
extern u32 func_00B279D0(void);
extern void func_001BC300(void);
extern char D_00B32E10[];

void func_00B27220(void) {
    s32 sp30;
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_s0;
    s32 var_v1;
    u32 var_s1;

    var_a1 = ((void *)D_00B32E10);
    var_a0 = &sp30;
    var_v1 = 0x15;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 4;
        var_a0 += 4;
    } while (var_v1 > 0);
    if (func_00B279D0() != 0) {
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < 7U);
    }
}
