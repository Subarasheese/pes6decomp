/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_008C8310(void *, u8, u8);                   /* extern */
s32 func_008D90A0(u8);                              /* extern */
s32 func_008D9300(u8);                              /* extern */

s32 func_008C8610(void *arg0) {
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_s0;
    s8 temp_a0;
    s8 temp_v0_3;
    s8 temp_v0_4;
    u8 temp_v0_2;
    u8 temp_v1;

    var_s0 = 0;
    temp_v0 = func_008D9300(M2C_FIELD(arg0, u8 *, 4));
    switch (temp_v0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        temp_a0 = M2C_FIELD(arg0, s8 *, 0xA);
        if ((temp_a0 == M2C_FIELD(arg0, s8 *, 8)) && (M2C_FIELD(arg0, u8 *, 0xB) == M2C_FIELD(arg0, u8 *, 9))) {
            if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
                if (*M2C_FIELD(arg0, u16 **, 0) == 0) {
                    return 0;
                }
                func_0026E840(0x8400F803);
                return 0;
            }
            func_0026E840(0x8400F803);
            temp_v0_2 = M2C_FIELD(arg0, u8 *, 9) + 1;
            M2C_FIELD(arg0, u8 *, 9) = temp_v0_2;
            M2C_FIELD(arg0, u8 *, 0xB) = temp_v0_2;
            M2C_FIELD(arg0, u8 *, 0xC) = func_008C8310(arg0, (u8) M2C_FIELD(arg0, s8 *, 8), temp_v0_2 & 0xFF);
            goto block_27;
        }
        temp_v1 = M2C_FIELD(arg0, u8 *, 0xB);
        if (temp_v1 != (M2C_FIELD(((temp_a0 * 8) + arg0), u8 *, 0x14) - 1)) {
            M2C_FIELD(arg0, u8 *, 0xB) = (u8) (temp_v1 + 1);
        } else {
            M2C_FIELD(arg0, s8 *, 0xA) = (s8) (M2C_FIELD(arg0, s8 *, 0xA) + 1);
            M2C_FIELD(arg0, u8 *, 0xB) = 0U;
        }
        var_s0 = 1;
    default:                                        /* switch 1 */
block_27:
        if (var_s0 == 0) {
            temp_v1_2 = func_008D90A0(M2C_FIELD(arg0, u8 *, 4)) & 0x2060;
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0x40:                              /* switch 2 */
                func_0026E840(0x84008401);
                return 3;
            case 0x2000:                            /* switch 2 */
                func_0026E840(0x8400F803);
                return 3;
            }
        } else {
            func_008C8310(arg0, (u8) M2C_FIELD(arg0, s8 *, 0xA), M2C_FIELD(arg0, u8 *, 0xB));
            func_0026E840(0x8400F803);
            return 1;
        }
        break;
    case 1:                                         /* switch 1 */
        if (M2C_FIELD(arg0, u8 *, 0xB) == 0) {
            temp_v0_3 = M2C_FIELD(arg0, s8 *, 0xA);
            if (temp_v0_3 != 0) {
                temp_v0_4 = temp_v0_3 - 1;
                M2C_FIELD(arg0, s8 *, 0xA) = temp_v0_4;
                M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(((((s64) ((s64) temp_v0_4 << 0x38) >> 0x38) * 8) + arg0), u8 *, 0x14);
                goto block_10;
            }
        } else {
block_10:
            var_s0 = 1;
            M2C_FIELD(arg0, u8 *, 0xB) = (u8) (M2C_FIELD(arg0, u8 *, 0xB) - 1);
        }
        goto block_27;
    }
}
