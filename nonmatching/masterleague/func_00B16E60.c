/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
s32 func_0099B570(M2C_UNK);                         /* extern */

s32 func_00B16E60(void) {
    u8 temp_s0;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 3);
        if ((temp_s0 & 0xFF) >= (func_0099B570(0) & 0xFF)) {
            return 2;
        }
        return 1;
    }
    return 1;
}
