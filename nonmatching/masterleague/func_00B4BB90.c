/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
M2C_UNK func_00B4BCC0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B4BDE0(M2C_UNK);                     /* extern */

s32 func_00B4BB90(void) {
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x34D);
            switch (temp_v0_2) {                    /* irregular */
            case 0:
                func_00B4BDE0(1);
                break;
            case 1:
                func_00B4BCC0(1, 0);
                break;
            }
        }
    }
    return 0;
}
