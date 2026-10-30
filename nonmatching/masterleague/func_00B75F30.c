/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B76A10(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B74900(u8);                          /* extern */
s16 func_00B74DB0(s32, s16, s16);                   /* extern */

s32 func_00B75F30(void) {
    s16 temp_v0_2;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x79C);
        switch (temp_v1) {                          /* irregular */
        case 3:
            return 1;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x7CC) == M2C_FIELD(temp_v0, s16 *, 0x7C4)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_00B74DB0(M2C_FIELD(temp_v0, s32 *, 0x7C8), M2C_FIELD(temp_v0, s16 *, 0x7CC), M2C_FIELD(temp_v0, s16 *, 0x7CE));
            M2C_FIELD(temp_v0, s16 *, 0x7CC) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                M2C_FIELD(temp_v0, s32 *, 0x7C8) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x7CC) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x7CE) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x79C) = 0U;
            }
        case 0:
block_21:
        default:
            return 0;
        case 1:
            func_00B74900(M2C_FIELD(temp_v0, u8 *, 0xBA5));
            M2C_FIELD(temp_v0, u8 *, 0x79C) = 0U;
            if (M2C_FIELD(temp_v0, u8 *, 0xBA4) == 0) {
                func_0026E840(0x8400F802);
            }
            goto block_21;
        }
    } else {
        return 1;
    }
}
