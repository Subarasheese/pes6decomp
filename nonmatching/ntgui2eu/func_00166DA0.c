/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165D10(s32, void *);                 /* extern */
M2C_UNK func_001677F8(void *);                      /* extern */
M2C_UNK func_0016B000(void *);                      /* extern */

void func_00166DA0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    if ((arg1 != M2C_FIELD(arg0, s32 *, 0x5A0)) || (arg2 != M2C_FIELD(arg0, s32 *, 0x5A4))) {
        M2C_FIELD(arg0, s32 *, 0x5A0) = arg1;
        M2C_FIELD(arg0, s32 *, 0x4D4) = arg2;
        M2C_FIELD(arg0, s32 *, 0x5A4) = arg2;
        func_001677F8(arg0);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x50);
        if (temp_a0 != 0) {
            func_00165D10(temp_a0, arg0);
        }
        func_0016B000(arg0);
    }
}
