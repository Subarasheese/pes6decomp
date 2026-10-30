/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009BEC70();                                /* extern */
M2C_UNK func_00B08600(u8);                          /* extern */
s16 func_00B08750(s32, s16, s16);                   /* extern */

s32 func_00B09840(void) {
    s16 temp_v0_2;
    s32 temp_a0;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5D8);
        switch (temp_v1) {                          /* irregular */
        case 4:
            func_0026E840(0x84008401);
            return 1;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x5BE) == M2C_FIELD(temp_v0, s16 *, 0x5BA)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_00B08750(M2C_FIELD(temp_v0, s32 *, 0x5C8), M2C_FIELD(temp_v0, s16 *, 0x5BE), M2C_FIELD(temp_v0, s16 *, 0x5BC));
            M2C_FIELD(temp_v0, s16 *, 0x5BE) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                func_00B08600(M2C_FIELD(temp_v0, u8 *, 0x3A4));
                M2C_FIELD(temp_v0, s32 *, 0x5C8) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x5BE) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x5BC) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x5D8) = 0U;
            }
        default:
block_26:
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x39C);
            if (!(temp_a0 & 1)) {
                return 0;
            }
            M2C_FIELD(temp_v0, s32 *, 0x39C) = (s32) (temp_a0 & ~1);
            return 1;
        case 1:
            func_0026E840(0x8400F802);
            func_00B08600(M2C_FIELD(temp_v0, u8 *, 0x3A4));
            M2C_FIELD(temp_v0, u8 *, 0x5D8) = 0U;
            goto block_26;
        case 3:
            if (func_009BEC70() != 1) {
                return 0;
            }
            M2C_FIELD(temp_v0, s32 *, 0x5DC) = 1;
            M2C_FIELD(temp_v0, u8 *, 0x5D8) = 0U;
            return 0;
        }
    } else {
        return 1;
    }
}
