/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0094C710(s8);
extern void *D_003E7B0C;

void func_0093D6F0(s8 arg0, s8 arg1) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if ((temp_v1 != 2) && (temp_v1 != 0)) {
        M2C_FIELD(D_003E7B0C, s8 *, 0x2C) = arg0;
    }
    func_0094C710(arg1);
}
