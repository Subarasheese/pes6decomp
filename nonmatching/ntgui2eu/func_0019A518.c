/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AC40(void *);                      /* extern */
M2C_UNK func_0019DBD0(M2C_UNK);                     /* extern */

void func_0019A518(void *arg0, u32 arg1, s32 arg2) {
    s32 var_s0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1) {
        var_s0 = ((arg2 != 0) ? arg2 : 0x01000000) - 1;
        do {
            if (var_s0 < 0) {
                func_0019DBD0(0x600198);
                func_0019AC40(arg0);
            }
            var_s0 -= 1;
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1);
    }
}
