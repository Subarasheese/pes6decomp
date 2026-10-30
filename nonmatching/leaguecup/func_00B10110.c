/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00B10110(s32 arg0) {
    s32 temp_s1;
    s32 temp_s1_2;
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        temp_s1 = arg0 & 0xFFFF;
        if (temp_s1 != 0xFFFF) {
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0xE14), 1);
            func_00956A90(M2C_FIELD(temp_v0, s32 *, 0xE14), 1, temp_s1, 0);
            temp_s1_2 = func_0095C4A0(arg0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0xE08), 1);
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0xE08), 0, temp_s1_2);
        } else {
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0xE14), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0xE08), 0);
        }
    }
}
