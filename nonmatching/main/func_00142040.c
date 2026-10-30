/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00142040(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    if (arg0 == (void *)0x1000D000) {
        var_a3 = 0x100;
    } else {
        var_a3 = 0x200;
    }
    *(s32 *)0x1000E010 = var_a3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0xF) | 0x101);
}
