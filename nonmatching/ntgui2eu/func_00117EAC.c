/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00117EAC(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xF0);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0xF8) - temp_v1;
    if (temp_a1 < 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (temp_v1 + temp_a1);
    }
    if (temp_a1 >= 8) {
        M2C_FIELD(arg0, s32 *, 0xF0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xF0) + temp_a1) - 7);
    }
}
