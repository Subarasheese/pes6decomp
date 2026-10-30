/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A2330[];

void func_00291980(s32 arg0, s32 arg1) {
    void *temp_a2;

    if ((((void *)D_005A2330) != NULL) && (arg0 >= 0) && (arg0 < 2)) {
        if (arg1 >= 6) {
            return;
        }
        temp_a2 = arg0 + ((void *)D_005A2330);
        M2C_FIELD(temp_a2, u8 *, 1) = (u8) (M2C_FIELD(temp_a2, u8 *, 1) & 0xF8);
        M2C_FIELD(temp_a2, u8 *, 1) = (u8) (M2C_FIELD(temp_a2, u8 *, 1) | (arg1 & 0xFF));
    }
}
