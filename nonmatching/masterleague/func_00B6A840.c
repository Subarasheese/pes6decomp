/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
s32 func_00225720(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009BECB0(u16, s32);                    /* extern */

s32 func_00B6A840(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 4) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x3668);
            switch (temp_a0) {                      /* irregular */
            case 1:
                break;
            default:
                if (M2C_FIELD(temp_v0, u8 *, 0x377C) == 0) {
                    func_009BECB0(M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x330D) * 0x198) + temp_v0), u16 *, 0xC), func_00225720(temp_a0));
                    M2C_FIELD(temp_v0, s32 *, 0x3668) = 1;
                    M2C_FIELD(temp_v0, u8 *, 4) = 3U;
                    func_00958000(6);
                    func_0026E840(0x84028400);
                } else {
                case 2:
                    if ((M2C_FIELD(temp_v0, u8 *, 0x377C) == 1) && (temp_a0 != 2)) {

                    } else {
                        M2C_FIELD(temp_v0, s32 *, 0x3668) = 3;
                        M2C_FIELD(temp_v0, u8 *, 4) = 4U;
                        func_00958000(0x80);
                    }
                }
                break;
            }
        }
    }
    return 0;
}
