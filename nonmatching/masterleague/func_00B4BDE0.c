/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

void func_00B4BDE0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_v0;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x350);
        if (arg0 > 0) {
            temp_v1_2 = temp_v1 + arg0;
            M2C_FIELD(temp_v0, s32 *, 0x350) = temp_v1_2;
            if (temp_v1_2 >= 8) {
                M2C_FIELD(temp_v0, s32 *, 0x350) = 8;
            }
        } else if (arg0 < 0) {
            temp_v1_3 = temp_v1 + arg0;
            M2C_FIELD(temp_v0, s32 *, 0x350) = temp_v1_3;
            if (temp_v1_3 <= 0) {
                M2C_FIELD(temp_v0, s32 *, 0x350) = 0;
            }
        }
        if ((temp_v1 & 0xFF & 0xFF) != M2C_FIELD(temp_v0, s32 *, 0x350)) {
            func_00958000(0x51);
            M2C_FIELD(temp_v0, s8 *, 0x34C) = 9;
        }
    }
}
