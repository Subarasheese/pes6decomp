/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134FB0(s32);                         /* extern */

void func_00154BF0(void *arg0) {
    s32 temp_a0;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_a0 != 0) {
        func_00134FB0(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
