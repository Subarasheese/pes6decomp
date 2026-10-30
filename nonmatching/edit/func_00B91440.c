/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDFA00[];

void func_00B91440(s32 arg0) {
    void *temp_a1;

    temp_a1 = ((void *)D_00CDFA00) + (arg0 * 0x18);
    if ((M2C_FIELD(temp_a1, u8 *, 0x10) == 1) && (M2C_FIELD(temp_a1, s32 *, 0xC) == 0)) {
        M2C_FIELD(temp_a1, s32 *, 0xC) = 1;
        M2C_FIELD(temp_a1, s8 *, 0x11) = 1;
    }
}
