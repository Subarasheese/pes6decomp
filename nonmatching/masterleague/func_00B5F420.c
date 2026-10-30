/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5F200(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009BEC70();                                /* extern */
M2C_UNK func_00B5FA50(u8);                          /* extern */
s16 func_00B5FBA0(s32, s16, s16);                   /* extern */

s32 func_00B5F420(void) {
    s16 temp_v0_2;
    s32 temp_a0;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B5F200();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x8B0);
        switch (temp_v1) {                          /* irregular */
        case 4:
            func_0026E840(0x84008401);
            return 1;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x896) == M2C_FIELD(temp_v0, s16 *, 0x892)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_00B5FBA0(M2C_FIELD(temp_v0, s32 *, 0x8A0), M2C_FIELD(temp_v0, s16 *, 0x896), M2C_FIELD(temp_v0, s16 *, 0x894));
            M2C_FIELD(temp_v0, s16 *, 0x896) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                func_00B5FA50(M2C_FIELD(temp_v0, u8 *, 0x54C));
                M2C_FIELD(temp_v0, s32 *, 0x8A0) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x896) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x894) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x8B0) = 0U;
            }
        default:
block_26:
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x544);
            if (!(temp_a0 & 1)) {
                return 0;
            }
            M2C_FIELD(temp_v0, s32 *, 0x544) = (s32) (temp_a0 & ~1);
            return 1;
        case 1:
            func_0026E840(0x8400F802);
            func_00B5FA50(M2C_FIELD(temp_v0, u8 *, 0x54C));
            M2C_FIELD(temp_v0, u8 *, 0x8B0) = 0U;
            goto block_26;
        case 3:
            if (func_009BEC70() != 1) {
                return 0;
            }
            M2C_FIELD(temp_v0, s8 *, 0x92C) = 1;
            M2C_FIELD(temp_v0, u8 *, 0x8B0) = 0U;
            return 0;
        }
    } else {
        return 1;
    }
}
