/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
s32 func_0097D080(s32 arg0) {
    s32 temp_a0;
    void *temp_v0;

    temp_v0 = func_00229380();
    if (temp_v0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        if (temp_a0 < 8) {
            return (M2C_FIELD(temp_v0, u8 *, 4) & (1 << temp_a0)) != 0;
        }
        return 0;
    }
    return 0;
}
