/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B279D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B19B30(s32);                             /* extern */
s32 func_00B27750();                                /* extern */

s32 func_00B26FC0(void) {
    s32 temp_a0;
    s32 temp_s1;
    u32 temp_v0;

    temp_s1 = func_00B27750() & 0xFF;
    temp_v0 = func_00B279D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0xD80) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0xD9A) == 0) {
                temp_a0 = temp_s1 & 0xFF;
                if (func_00B19B30(temp_v0 + (temp_a0 * 0x90) + (M2C_FIELD((temp_a0 + temp_v0), u8 *, 0xD60) * 0x48) + 0x2B0) != 0) {
                    M2C_FIELD(temp_v0, s8 *, 0xD99) = 2;
                    M2C_FIELD(temp_v0, s8 *, 0xD98) = 0;
                    func_0026E840(0x84028400);
                } else {
                    func_0026E840(0x8C008005);
                }
            }
        }
    }
    return 0;
}
