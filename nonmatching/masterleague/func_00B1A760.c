/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00224E20(s32, s32);                      /* extern */
s32 func_0096F9D0(s32);                             /* extern */

void func_00B1A760(s32 arg0, s32 arg1) {
    s32 temp_a1;
    u8 temp_a1_2;
    void *temp_v0;

    temp_a1 = func_0096F9D0(arg1) & 0xFF;
    if (temp_a1 != 0xFF) {
        temp_v0 = func_00224E20(arg0, temp_a1);
        if (temp_v0 != NULL) {
            temp_a1_2 = M2C_FIELD(temp_v0, u8 *, 0x10);
            if ((temp_a1_2 & 0xF) == 3) {
                M2C_FIELD(temp_v0, u8 *, 0x10) = (u8) ((temp_a1_2 & ~0xF) | 2);
            }
        }
    }
}
