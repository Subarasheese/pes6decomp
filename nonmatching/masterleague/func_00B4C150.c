/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

s32 func_00B4C150(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x34D);
            switch (temp_a0) {                      /* irregular */
            case 0:
                M2C_FIELD(temp_v0, s32 *, 0x350) = 8;
                M2C_FIELD(temp_v0, u8 *, 0x34C) = 0xAU;
                break;
            case 1:
                M2C_FIELD(temp_v0, u8 *, 0x34D) = 0U;
                M2C_FIELD(temp_v0, u8 *, 0x34C) = 4U;
                func_00958000(0x51);
                break;
            }
        }
    }
    return 0;
}
