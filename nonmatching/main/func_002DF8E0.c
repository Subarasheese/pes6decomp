/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E1C50(void *, s32);
M2C_UNK func_002DF730(void *, s32);                 /* extern */

void func_002DF8E0(void *arg0, s32 arg1) {
    s32 var_s1;
    void *var_s0;

    if (arg0 != NULL) {
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_002E1C50(var_s0 + 0x28, arg1);
            var_s1 += 1;
            var_s0 += 0x24;
        } while (var_s1 < 2);
        func_002DF730(arg0, M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s8 *, 0xB) = (s8) arg1;
    }
}
