/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00AE6B90();                            /* extern */

s32 func_00AEAB90(void) {
    u32 temp_v0;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x59F4) != 1) {
                if (M2C_FIELD(temp_v0, s32 *, 0x59F0) == 4) {
                    func_009BE0B0();
                }
                if ((M2C_FIELD(temp_v0, s32 *, 0x59F0) == 2) && (M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA) != 0)) {
                    func_009BE0B0();
                }
                M2C_FIELD(temp_v0, u8 *, 0x3DB5) = 8U;
                M2C_FIELD(temp_v0, s32 *, 0x3DB8) = 4;
            } else {
                M2C_FIELD(temp_v0, s32 *, 0x59F4) = 0;
                func_00AE6B90();
                if ((M2C_FIELD(temp_v0, s32 *, 0x59F0) == 2) && (M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA) != 0)) {
                    func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0xB04), 0);
                }
            }
            func_0026E840(0x84008401);
        }
    }
    return 0;
}
