/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00B476C0(M2C_UNK);                     /* extern */

s32 func_00B45560(void) {
    u32 temp_v0;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3B5) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x3B6) != 3) {
                M2C_FIELD(temp_v0, u8 *, 0x3B5) = 3U;
                if (M2C_FIELD(temp_v0, u8 *, 0x8FD) != 0) {
                    func_0026E840(0x84008401);
                }
            } else {
                func_00B476C0(0);
                M2C_FIELD(temp_v0, u8 *, 0x3B5) = 6U;
                func_009BE0B0();
                func_00958000(0x45);
                func_0026E840(0x84008401);
            }
        }
    }
    return 0;
}
