/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B738B0();                                /* extern */
extern void *D_003EAF08;

u8 func_00B77210(void) {
    void *temp_s0;

    temp_s0 = D_003EAF08;
    if (temp_s0 == NULL) {
        return 1U;
    }
    if (func_00B738B0() != 1) {
        return 4U;
    }
    return M2C_FIELD(temp_s0, u8 *, 0x3CD);
}
