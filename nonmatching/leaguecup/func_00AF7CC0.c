/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972020(s32, s8);                     /* extern */

void func_00AF7CC0(s8 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29FA4), arg0);
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29FA8), arg0);
        func_00972020(M2C_FIELD(temp_v0, s32 *, 0x29FAC), arg0);
        if ((arg0 & 0xFF) != 1) {
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x29A50) >= 2) {
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x26C), 1);
            } else {
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x26C), 0);
            }
        } else {
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x26C), 0);
        }
    }
}
