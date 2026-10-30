/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDFA00[];

void func_00B912F0(s32 arg0, u8 arg1) {
    void *temp_a3;

    temp_a3 = ((void *)D_00CDFA00) + (arg0 * 0x18);
    if ((M2C_FIELD(temp_a3, u8 *, 0x10) == 1) && (M2C_FIELD(temp_a3, u8 *, 0x14) != (arg1 & 0xFF))) {
        M2C_FIELD(temp_a3, u8 *, 0x14) = arg1;
        M2C_FIELD(temp_a3, s8 *, 0x11) = 1;
    }
}
