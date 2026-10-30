/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00229970(void);
extern u32 func_009AB630(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009A9900(u8, u8);                      /* extern */
s16 func_009A9B50(s32, s16, s16);                   /* extern */
M2C_UNK func_009AA5F0(u8, u8);                      /* extern */
M2C_UNK func_009AAB90(M2C_UNK);                     /* extern */
M2C_UNK func_00B60E60(M2C_UNK);                     /* extern */
s32 func_00B60EE0();                                /* extern */
M2C_UNK func_00B60F10();                            /* extern */
M2C_UNK func_00B60F40(s32, M2C_UNK);                /* extern */

s32 func_009AAEE0(void) {
    s16 temp_a1;
    s16 temp_v0_2;
    s32 var_v0;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_v1;

    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5B2);
        switch (temp_v1) {                          /* irregular */
        case 5:
            func_0026E840(0x84008401);
            return 1;
        case 3:
            func_0026E840(0x84028400);
            if (func_00229970() & 0xFF) {
                var_v0 = 0;
            } else {
                var_v0 = 2;
            }
            func_00B60F40(var_v0 & 0xFF, 0);
            func_00B60F10();
            func_009AAB90(0);
            M2C_FIELD(temp_v0, u8 *, 0x5B2) = 4U;
block_31:
        default:
            return 0;
        case 2:
            if (M2C_FIELD(temp_v0, s16 *, 0x84C) == M2C_FIELD(temp_v0, s16 *, 0x846)) {
                func_0026E840(0x8400F802);
            }
            temp_v0_2 = func_009A9B50(M2C_FIELD(temp_v0, s32 *, 0x848), M2C_FIELD(temp_v0, s16 *, 0x84C), M2C_FIELD(temp_v0, s16 *, 0x84E));
            M2C_FIELD(temp_v0, s16 *, 0x84C) = temp_v0_2;
            if (((s64) ((s64) temp_v0_2 << 0x30) >> 0x30) <= 0) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
                func_009A9900(temp_a0, M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x7B5));
                M2C_FIELD(temp_v0, s32 *, 0x848) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x84C) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x84E) = 0;
                M2C_FIELD(temp_v0, u8 *, 0x5B2) = 0U;
            }
            goto block_31;
        case 1:
            func_0026E840(0x8400F803);
            M2C_FIELD(temp_v0, u8 *, 0x5B2) = 0U;
            goto block_31;
        case 4:
            if (func_00B60EE0() == 1) {
                func_00B60E60(0);
                func_009AAB90(1);
                temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
                func_009AA5F0(temp_a0_2, M2C_FIELD((temp_a0_2 + temp_v0), u8 *, 0x7B5));
                temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x846);
                func_009A9B50(-(s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x7B4) + temp_v0), u8 *, 0x7FD), temp_a1, (s16) ((s64) ((s64) -temp_a1 << 0x30) >> 0x30));
                temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
                func_009A9900(temp_a0_3, M2C_FIELD((temp_a0_3 + temp_v0), u8 *, 0x7B5));
                M2C_FIELD(temp_v0, u8 *, 0x5B2) = 0U;
            }
            goto block_31;
        }
    } else {
        return 1;
    }
}
