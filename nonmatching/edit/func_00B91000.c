/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDF8F4[];

void func_00B91000(s32 arg0, s32 arg1) {
    void *temp_a1;
    void *temp_v1;

    if (arg1 < 8) {
        temp_v1 = ((void *)D_00CDF8F4) + (arg1 * 0xC);
        temp_a1 = temp_v1 + 0xC;
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_v1, s32 *, 0xC) = 2;
            M2C_FIELD(temp_a1, s32 *, 4) = 0;
            M2C_FIELD(temp_a1, s32 *, 8) = arg0;
        }
    }
}
