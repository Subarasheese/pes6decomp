/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00199B60();                                /* extern */

void func_00199BD0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 8) = func_00199B60();
    M2C_FIELD(temp_v1, s32 *, 0) = (s32) (arg3 | 0x10000000);
    temp_v1_2 = temp_v1 + 4;
    M2C_FIELD(temp_v1_2, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0) = (void *) (temp_v1_2 + 0xC);
    M2C_FIELD(temp_v1_2, s32 *, 8) = arg2;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
}
