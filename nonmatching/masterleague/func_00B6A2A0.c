/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009BEC70(u8);                              /* extern */
M2C_UNK func_00B6B000(u8, M2C_UNK);                 /* extern */
s16 func_00B6B9C0(s32, s16, s16);                   /* extern */
M2C_UNK func_00B6BC90(u8);                          /* extern */

s32 func_00B6A2A0(void) {
    s16 temp_v0_2;
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 4);
        switch (temp_a0) {                          /* irregular */
        case 4:
            func_0026E840(0x84028400);
            return 1;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x365C) == M2C_FIELD(temp_v0, s16 *, 0x3656)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_00B6B9C0(M2C_FIELD(temp_v0, s32 *, 0x3658), M2C_FIELD(temp_v0, s16 *, 0x365C), M2C_FIELD(temp_v0, s16 *, 0x365E));
            M2C_FIELD(temp_v0, s16 *, 0x365C) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                func_00B6BC90(M2C_FIELD(temp_v0, u8 *, 0x330D));
                func_00B6B000(M2C_FIELD(temp_v0, u8 *, 0x330D), 1);
                M2C_FIELD(temp_v0, s32 *, 0x3658) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x365C) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x365E) = 0;
                M2C_FIELD(temp_v0, u8 *, 4) = 0U;
            }
block_29:
        default:
            return 0;
        case 1:
            if (M2C_FIELD(temp_v0, s32 *, 0x3668) != 2) {
                func_0026E840(0x8400F802);
            }
            func_00B6BC90(M2C_FIELD(temp_v0, u8 *, 0x330D));
            func_00B6B000(M2C_FIELD(temp_v0, u8 *, 0x330D), 1);
            M2C_FIELD(temp_v0, u8 *, 4) = 0U;
            goto block_29;
        case 0:
            func_00B6B000(M2C_FIELD(temp_v0, u8 *, 0x330D), 0);
            goto block_29;
        case 3:
            if (func_009BEC70(temp_a0) == 1) {
                M2C_FIELD(temp_v0, u8 *, 4) = 0U;
            }
            goto block_29;
        }
    } else {
        return 1;
    }
}
