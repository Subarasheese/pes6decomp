/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B77610();                                /* extern */
extern void *D_003EAF0C;
extern u8 D_003EAF10;

s32 func_00B77380(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_003EAF0C;
    if (temp_s0 == NULL) {
        return 0;
    }
    temp_v0 = func_00B77610();
    switch (temp_v0) {                              /* irregular */
    case 1:
        D_003EAF10 = 0;
        return temp_v0;
    default:
        D_003EAF10 = M2C_FIELD(temp_s0, u8 *, 0x40);
        /* fallthrough */
    case 0:
        return temp_v0;
    }
}
