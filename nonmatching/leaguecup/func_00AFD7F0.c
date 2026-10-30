/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF99A0(u8, s32, u16, s32);           /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */

s32 func_00AFD7F0(void) {
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x80C) != 1) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
            if ((temp_v1 != 6) && (temp_v1 != 1) && (temp_v1 != 0)) {

            } else if ((temp_v1 == 6) && (M2C_FIELD(temp_v0, s32 *, 0x29F98) == 2)) {

            } else {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x5C5);
                if ((s32) temp_v0_2 >= 5) {
                    M2C_FIELD(temp_v0, u8 *, 0x5C5) = 0U;
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x5C5) = (u8) (temp_v0_2 + 1);
                }
                func_00AF99A0(M2C_FIELD(temp_v0, u8 *, 0x5C5), func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0x5D4), M2C_FIELD(temp_v0, s32 *, 0x5E8));
                func_0026E840(0x8400F803);
            }
        }
    }
    return 0;
}
