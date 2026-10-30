/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
s32 func_0021D160(void *arg0) {
    s32 temp_s0;
    s32 var_a0;

    var_a0 = 1;
    if ((arg0 + 0xC) != 0) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (var_a0 != 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_s0 & 1) {
            func_00153FA0(M2C_FIELD(arg0, void **, 0x14));
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_s0 ^ 1);
        }
        return -0x7E;
    }
    return 0;
}
