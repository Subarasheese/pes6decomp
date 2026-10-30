/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00192438(void);
s32 func_0019AE00(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_0019AE20(M2C_UNK, s32);                /* extern */
M2C_UNK func_0019BC00(M2C_UNK);                     /* extern */
M2C_UNK func_0019BC68(M2C_UNK);                     /* extern */

s32 func_001940C0(s32 arg0) {
    s32 temp_s2;
    void *temp_s0;

    temp_s0 = func_00192438();
    temp_s2 = M2C_FIELD(temp_s0, s32 *, 8);
    if (arg0 == 0) {
        func_0019BC00(2);
        func_0019AE20(2, M2C_FIELD(temp_s0, s32 *, 0xC));
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    } else {
        if (temp_s2 != 0) {
            func_0019BC00(2);
            func_0019AE20(2, M2C_FIELD(temp_s0, s32 *, 0xC));
        }
        M2C_FIELD(temp_s0, s32 *, 8) = arg0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = func_0019AE00(2, arg0, -1);
        func_0019BC68(2);
    }
    return temp_s2;
}
