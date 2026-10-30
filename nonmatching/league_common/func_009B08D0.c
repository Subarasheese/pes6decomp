/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B0FD0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009AF550(u8, u8);                      /* extern */
s16 func_009AF770(s32, s16, s16);                   /* extern */

s32 func_009B08D0(void) {
    s16 temp_v0_2;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v1;

    temp_v0 = func_009B0FD0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5FA);
        switch (temp_v1) {                          /* irregular */
        case 3:
            func_0026E840(0x84008401);
            return 1;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x894) == M2C_FIELD(temp_v0, s16 *, 0x88E)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_009AF770(M2C_FIELD(temp_v0, s32 *, 0x890), M2C_FIELD(temp_v0, s16 *, 0x894), M2C_FIELD(temp_v0, s16 *, 0x896));
            M2C_FIELD(temp_v0, s16 *, 0x894) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x7FC);
                func_009AF550(temp_a0, M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x7FD));
                M2C_FIELD(temp_v0, s32 *, 0x890) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x894) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x896) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x5FA) = 0U;
            }
block_20:
        default:
            return 0;
        case 1:
            func_0026E840(0x8400F803);
            M2C_FIELD(temp_v0, u8 *, 0x5FA) = 0U;
            goto block_20;
        }
    } else {
        return 1;
    }
}
