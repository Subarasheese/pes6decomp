/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_0022F210(s32, u8, s32, u8);                 /* extern */

void func_00986B90(void *arg0, s32 arg1) {
    s32 temp_a2;
    u8 temp_a1;
    u8 temp_a3;

    if (arg0 != NULL) {
        temp_a2 = (0 & 0xF) * 0x10;
        M2C_FIELD(arg0, u8 *, 0) = (u8) ((M2C_FIELD(arg0, u8 *, 0) & ~1) | (0 & 1));
        temp_a3 = M2C_FIELD(arg0, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0) = (u8) ((temp_a3 & ~0xF0) | temp_a2);
        temp_a1 = M2C_FIELD(arg0, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0) = (u8) ((temp_a1 & ~0xE) | ((0 & 7) * 2));
        M2C_FIELD(arg0, s8 *, 1) = func_0022F210(arg1, temp_a1, temp_a2, temp_a3);
        M2C_FIELD(arg0, s8 *, 2) = 0;
        M2C_FIELD(arg0, u8 *, 3) = (u8) ((M2C_FIELD(arg0, u8 *, 3) & ~0x3F) | (0 & 0x3F));
        M2C_FIELD(arg0, u8 *, 3) = (u8) ((M2C_FIELD(arg0, u8 *, 3) & ~0x80) | ((0 & 1) << 7));
    }
}
