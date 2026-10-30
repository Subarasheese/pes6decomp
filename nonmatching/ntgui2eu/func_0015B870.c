/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134F28(s32);                             /* extern */
M2C_UNK func_00134FB0(s32);                         /* extern */

void func_0015B870(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_00134FB0(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = temp_a0_2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (temp_a0_2 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = func_00134F28(temp_a0_2 * 4);
    }
}
