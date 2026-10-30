/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00AE6B90();                            /* extern */

s32 func_00AEACA0(void) {
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x59F4) != 1) {
                temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x59F0);
                if ((temp_v1 != 4) && (temp_v1 == 2)) {
                    temp_v0_2 = M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA);
                    if ((temp_v0_2 != 0) && ((s32) temp_v0_2 >= 2)) {
                        func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0xB04), 1);
                    }
                }
                M2C_FIELD(temp_v0, s32 *, 0x59F4) = 1;
                func_00AE6B90();
                func_0026E840(0x84028400);
            }
        }
    }
    return 0;
}
