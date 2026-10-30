/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223BA0(void);
void func_00220C50(s32 arg0, M2C_UNK arg1, s8 arg2) {
    void *temp_a0;

    temp_a0 = func_00223BA0() + (arg0 * 0x54);
    if (1 == 0) {
        M2C_FIELD(temp_a0, s8 *, 0x52) = arg2;
        return;
    }
    M2C_FIELD(temp_a0, s8 *, 0x53) = arg2;
}
