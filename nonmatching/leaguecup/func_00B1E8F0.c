/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B1EB50();                            /* extern */
M2C_UNK func_00B1ECA0(u8);                          /* extern */
M2C_UNK func_00B1EF80();                            /* extern */

s32 func_00B1E8F0(void) {
    s16 temp_a2;
    s16 temp_s1;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x324) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x32C) == 1) {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x31E);
                if (temp_v0_2 != 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x31E) = (u8) (temp_v0_2 - 1);
                    func_00B1ECA0(M2C_FIELD(temp_v0, u8 *, 0x31E));
                } else {
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0x328);
                    if ((s32) temp_v0_3 <= 0) {
                        M2C_FIELD(temp_v0, s32 *, 0x32C) = 0;
                        func_00B1ECA0(M2C_FIELD(temp_v0, u8 *, 0x31E));
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x328) = (u8) (temp_v0_3 - 1);
                        M2C_FIELD(temp_v0, s16 *, 0x324) = (s16) -M2C_FIELD(temp_v0, s16 *, 0x320);
                        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x32A);
                        M2C_FIELD(temp_v0, s16 *, 0x322) = temp_a2;
                        temp_s1 = M2C_FIELD(temp_v0, s16 *, 0x324);
                        func_00949340(temp_v0 + 0x324, 0, temp_a2);
                        M2C_FIELD(temp_v0, s16 *, 0x326) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x324) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                        func_00B1EB50();
                    }
                }
                func_0026E840(0x8400F802);
                func_00B1EF80();
            }
        }
    }
    return 0;
}
