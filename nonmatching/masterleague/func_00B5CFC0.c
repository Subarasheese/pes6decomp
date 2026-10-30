/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */

void func_00B5CFC0(s32 arg0) {
    s16 temp_a0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s16 *, 0x630);
        if (temp_a0 > 0) {
            if ((arg0 & 0xFF) < temp_a0) {
                func_00972040(M2C_FIELD(temp_v0, s32 *, 0x620), 0, M2C_FIELD(temp_v0, u8 *, 0x632) - M2C_FIELD(temp_v0, s16 *, 0x634));
                temp_v0_2 = func_00B5B230();
                if (temp_v0_2 != 0) {
                    func_002DF8E0(*M2C_FIELD(temp_v0_2, s32 **, 0x620), 1);
                }
            } else {
                temp_v0_3 = func_00B5B230();
                if (temp_v0_3 != 0) {
                    func_002DF8E0(*M2C_FIELD(temp_v0_3, s32 **, 0x620), 0);
                }
            }
        } else {
            temp_v0_4 = func_00B5B230();
            if (temp_v0_4 != 0) {
                func_002DF8E0(*M2C_FIELD(temp_v0_4, s32 **, 0x620), 0);
            }
        }
    }
}
