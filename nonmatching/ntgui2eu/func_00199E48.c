/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00199DF0();                                /* extern */

void func_00199E48(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 8) = func_00199DF0();
    M2C_FIELD(temp_a0, s32 *, 0) = (s32) (arg1 | 0x10000000);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, void **, 0) = (void *) (temp_a0 + 4 + 4);
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
}
