/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B012A0(s32 arg0) {
    u16 temp_v0;
    void *temp_v0_2;

    temp_v0_2 = func_00228A80();
    if (temp_v0_2 != NULL) {
        temp_v0 = M2C_FIELD((((arg0 & 0xFF) * 2) + temp_v0_2), u16 *, 0xCE26);
        if ((s32) temp_v0 < 0x100) {
            return temp_v0 & 0xFF;
        }
        return 0xFF;
    }
    return 0xFF;
}
