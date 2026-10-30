/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B74990(u8);                          /* extern */

s32 func_00B76450(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x79C) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xBA4);
            switch (temp_a0) {                      /* irregular */
            case 0:
                M2C_FIELD(temp_v0, u8 *, 0xBA4) = 1U;
                M2C_FIELD(temp_v0, u8 *, 0x79C) = 1U;
                func_00B74990(M2C_FIELD(temp_v0, u8 *, 0xBA5));
                func_0026E840(0x84008401);
                func_00958000(0x37);
                break;
            case 1:
                M2C_FIELD(temp_v0, u8 *, 0x79C) = 3U;
                func_0026E840(0x84008401);
                break;
            }
        }
    }
    return 0;
}
