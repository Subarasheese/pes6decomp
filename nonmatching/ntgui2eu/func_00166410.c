/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00189798(void *);                          /* extern */
s32 func_00189820(void *, s32, s32);                /* extern */

void func_00166410(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x518;
    if (M2C_FIELD(arg0, s32 *, 0x504) != 0) {
        if (func_00189798(temp_s1) != 0) {
            M2C_FIELD(arg0, s32 *, 0x504) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x618) = func_00189820(temp_s1, M2C_FIELD(arg0, s32 *, 0x508), M2C_FIELD(arg0, s32 *, 0x50C));
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
}
