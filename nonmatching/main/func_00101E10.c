/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00102538(void *);                      /* extern */
M2C_UNK printf(M2C_UNK);                     /* extern */

void func_00101E10(void *arg0, u32 arg1, s32 arg2) {
    s32 var_s0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1) {
        var_s0 = ((arg2 != 0) ? arg2 : 0x01000000) - 1;
        do {
            if (var_s0 < 0) {
                printf(0x3C3860);
                func_00102538(arg0);
            }
            var_s0 -= 1;
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x10) < arg1);
    }
}
