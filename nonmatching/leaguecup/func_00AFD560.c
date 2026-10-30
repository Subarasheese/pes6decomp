/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF99A0(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00AFA090();                            /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */

s32 func_00AFD560(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
        switch (temp_a0) {                          /* irregular */
        case 5:
            break;
        case 7:
            break;
        default:
            if (M2C_FIELD(temp_v0, u8 *, 0x29F9C) != 1) {
                if (M2C_FIELD(temp_v0, u8 *, 0x29F84) != 1) {
                    if ((u32) (temp_a0 - 3) >= 2U) {
                        if (M2C_FIELD(temp_v0, s32 *, 0x80C) != 0) {
                            M2C_FIELD(temp_v0, s32 *, 0x80C) = 0;
                        } else {
                            M2C_FIELD(temp_v0, s32 *, 0x80C) = 1;
                        }
                        func_0026E840(0x8400F803);
                        func_00AFA090();
                        func_00AF99A0(M2C_FIELD(temp_v0, u8 *, 0x5C5), func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0x5D4), M2C_FIELD(temp_v0, s32 *, 0x5E8));
                    }
                }
            }
            break;
        }
    }
    return 0;
}
