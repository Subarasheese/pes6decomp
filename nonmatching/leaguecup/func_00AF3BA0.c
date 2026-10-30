/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C9E80(s32);                         /* extern */
s32 func_00AF40F0();                                /* extern */
extern void *D_003EAD48;

u8 func_00AF3BA0(void) {
    void *temp_s0;

    temp_s0 = D_003EAD48;
    if (temp_s0 != NULL) {
        func_008C9E80(M2C_FIELD(temp_s0, s32 *, 0x20));
        if (func_00AF40F0() != 1) {
            return 2U;
        }
        return M2C_FIELD(temp_s0, u8 *, 0x8C);
    }
    return 2U;
}
