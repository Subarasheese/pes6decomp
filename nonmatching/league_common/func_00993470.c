/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00949130(u8, M2C_UNK, u8, s32);            /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00991CA0(u8);                          /* extern */

s32 func_00993470(void) {
    u32 temp_v0;
    u8 temp_a2;
    u8 temp_s0;

    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x258) != 0) {

        } else if (func_0095ED20() != 0) {
            temp_a2 = M2C_FIELD(temp_v0, u8 *, 0x255);
            temp_s0 = func_00949130(M2C_FIELD(temp_v0, u8 *, 0x25C), 3, temp_a2, (temp_a2 * temp_a2) & 0xFF) & 0xFF;
            if (M2C_FIELD(temp_v0, u8 *, 0x25C) != temp_s0) {
                func_00991CA0(temp_s0);
                func_0026E840(0x8400F802);
                M2C_FIELD(temp_v0, u8 *, 0x25C) = temp_s0;
            }
        }
    }
    return 0;
}
