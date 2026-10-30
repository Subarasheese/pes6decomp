/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_00342160(int);
s32 func_008082E0(s32);                             /* extern */

void func_00CCF290(void *arg0) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = func_008082E0(arg0 + 0x2C);
    if (temp_v0 != 0) {
        func_00342160(1);
    }
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_00264790(arg0, 2U);
    default:
block_19:
        if (var_s1 != 0) {
            func_00264790(arg0, 5U);
        }
        return;
    case 3:
        func_00264790(arg0, 0xAU);
        return;
    case 2:
        func_00264790(arg0, 0xAU);
        return;
    case 1:
        var_s1 = 1;
        goto block_19;
    }
}
