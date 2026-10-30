/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
s32 func_00225680(s32);                             /* extern */
M2C_UNK func_008CA390(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008CA810(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */

void func_00B4D3B0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    u32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00B4DFD0();
    if ((temp_v0 != 0) && (temp_a0 = arg0 & 0xFF, ((temp_a0 < 8) != 0))) {
        if ((arg1 & 0xFF) != 0xFF) {
            temp_s1 = func_00225680(arg1) & 0xFFFF;
            temp_v0_2 = ((arg0 & 0xFF) * 4) + temp_v0;
            func_00956A90(M2C_FIELD(temp_v0_2, s32 *, 0xA4), 4, temp_s1, 0);
            func_00956A80(M2C_FIELD(temp_v0_2, s32 *, 0xA4), 1);
            func_008CA810(M2C_FIELD(temp_v0, s32 *, 0x124), temp_s1, 1);
            func_008CA390(M2C_FIELD(temp_v0, s32 *, 0x124), 1, 1);
        } else {
            func_00956A80(M2C_FIELD(((temp_a0 * 4) + temp_v0), s32 *, 0xA4), 0);
            func_008CA390(M2C_FIELD(temp_v0, s32 *, 0x124), 1, 0);
        }
    }
}
