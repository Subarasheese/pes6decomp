/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
extern void *D_003E7E1C;

void func_00CE9A60(void) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(D_003E7E1C, s32 *, 0x150);
    if ((temp_s0 > 0) && (func_00CE4310() != 0)) {
        func_00CD7A00(1);
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) ((s32) ((temp_s0 + M2C_FIELD(D_003E7E1C, s32 *, 0x14C)) - 1) % temp_s0);
    }
}
