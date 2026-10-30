/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134F88(s32, s32, s32);                   /* extern */

void func_001546F8(void *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_a2 = temp_v1 - (temp_a0 * 2);
    if (((temp_v1 - (temp_a0 * 3)) >= M2C_FIELD(arg0, s32 *, 0xC)) && (temp_a2 >= M2C_FIELD(arg0, s32 *, 8))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_a2;
        M2C_FIELD(arg0, s32 *, 0) = func_00134F88(M2C_FIELD(arg0, s32 *, 0), temp_a2 * 0x258, temp_a2);
    }
}
