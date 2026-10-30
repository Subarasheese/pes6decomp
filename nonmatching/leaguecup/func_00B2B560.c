/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2BF70(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B19B30(s32);                             /* extern */
s32 func_00B2BCD0();                                /* extern */

s32 func_00B2B560(void) {
    s32 temp_s1;
    s32 temp_v1;
    u32 temp_v0;

    temp_s1 = func_00B2BCD0() & 0xFF;
    temp_v0 = func_00B2BF70();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x1364) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x137E) == 0) {
                temp_v1 = temp_s1 & 0xFF;
                if (func_00B19B30(temp_v0 + (temp_v1 * 0xD8) + (M2C_FIELD((temp_v1 + temp_v0), u8 *, 0x1344) * 0x48) + 0x33C) != 0) {
                    M2C_FIELD(temp_v0, s8 *, 0x137D) = 2;
                    M2C_FIELD(temp_v0, s8 *, 0x137C) = 0;
                    func_0026E840(0x84028400);
                } else {
                    func_0026E840(0x8C008005);
                }
            }
        }
    }
    return 0;
}
