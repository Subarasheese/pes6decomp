/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
s32 func_0021F280(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00972040(s32, s32, u32);               /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B6DB40(u8);                              /* extern */

void func_00B6D0B0(void) {
    s32 temp_s2;
    u32 temp_s1;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00B6DB70();
    if (temp_v0 != 0) {
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x5C);
        temp_s2 = (s32) temp_v0_2 % 8;
        temp_s1 = (u32) (temp_v0_2 & 0xFF) >> 3;
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x6C), temp_s2, temp_s1);
        M2C_FIELD(temp_v0, u8 *, 0x5C) = (u8) (temp_s2 + (temp_s1 * 8));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x58), 2, func_0021F280(func_00B6DB40(M2C_FIELD(temp_v0, u8 *, 0x5C)) & 0xFFFF, 0));
    }
}
