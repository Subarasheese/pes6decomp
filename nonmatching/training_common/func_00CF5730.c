/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00262340(void);
extern void func_001DF820(void *, s32);
M2C_UNK sprintf(s8 *, M2C_UNK *, s32, s32);   /* extern */
s32 func_00C949C0();                                /* extern */
s32 func_00CD3C50(s32);                             /* extern */
extern void *D_003EB344;
extern char D_00CFEB48[];

void func_00CF5730(void) {
    s8 sp30;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x40;
    var_v1 = &sp30;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s1 = func_00C949C0() + 1;
    var_s0 = func_00CD3C50(func_00262340());
    if (func_00262340() == 0x1A) {
        var_s0 = 1;
        var_s1 = 1;
    }
    if (func_00262340() == 0x15) {
        if ((u32) (var_s1 - 1) < 2U) {
            var_s1 = 1;
        }
        if (var_s1 == 3) {
            var_s1 = 2;
        }
        var_s0 -= 1;
    }
    sprintf(&sp30, ((void *)D_00CFEB48), var_s1, var_s0);
    func_001DF820(D_003EB344, (s32) &sp30);
}
