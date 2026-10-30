/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
void func_008D20A0(s32 arg0, s32 arg1, s8 arg2) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0 + (arg1 * 0x10);
    do {
        func_001EF900(M2C_FIELD(var_s0, void **, 0x54), arg2);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
}
