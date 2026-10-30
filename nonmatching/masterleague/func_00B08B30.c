/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A1E0(void);
extern u8 func_00226E70(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B0A070(s32);                             /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, M2C_UNK);       /* extern */

s32 func_00B08B30(void) {
    u32 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x2C) != 4) {

        } else {
            if (func_00226E70() != 0) {
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x28);
                if ((s32) temp_v1 < 6) {
                    var_v0 = temp_v1 + 1;
                    goto block_18;
                }
                M2C_FIELD(temp_v0, u8 *, 0x28) = 0U;
            } else {
                temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x28);
                if ((s32) temp_v1_2 < 5) {
                    var_v0 = temp_v1_2 + 1;
block_18:
                    M2C_FIELD(temp_v0, u8 *, 0x28) = var_v0;
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x28) = 0U;
                }
            }
            func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0x28), func_00B0A070((M2C_FIELD(temp_v0, u8 *, 0x470) + M2C_FIELD(temp_v0, u8 *, 0x484)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0x1C), 1);
            func_0026E840(0x8400F803);
        }
    }
    return 0;
}
