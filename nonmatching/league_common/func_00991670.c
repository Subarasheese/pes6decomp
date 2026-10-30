/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00990130();                            /* extern */

s32 func_00991670(void) {
    s16 temp_a2;
    s16 temp_s1;
    u32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x478) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x4AC) == 0) {
                if ((s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x495) + temp_v0), u8 *, 0x480) >= 9) {
                    temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x47C);
                    if ((s32) temp_v0_2 > 0) {
                        M2C_FIELD(temp_v0, u8 *, 0x47C) = (u8) (temp_v0_2 - 1);
                        M2C_FIELD(temp_v0, s16 *, 0x478) = (s16) -M2C_FIELD(temp_v0, s16 *, 0x474);
                        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x47E);
                        M2C_FIELD(temp_v0, s16 *, 0x476) = temp_a2;
                        temp_s1 = M2C_FIELD(temp_v0, s16 *, 0x478);
                        func_00949340(temp_v0 + 0x478, 0, temp_a2);
                        M2C_FIELD(temp_v0, s16 *, 0x47A) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x478) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                        func_00990130();
                        func_0026E840(0x8400F802);
                    }
                }
            }
        }
    }
    return 0;
}
