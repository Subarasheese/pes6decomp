/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246630(s32);                             /* extern */
extern void *D_003E77B0;

void func_009398F0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        if (func_00246630((var_s0 + 0x39) & 0xFFFF) == 1) {
            M2C_FIELD(D_003E77B0, s32 *, 0x30) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x30) | (1 << var_s0));
        }
        var_s0 += 1;
    } while (var_s0 < 7);
}
