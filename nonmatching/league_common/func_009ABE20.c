/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern s32 func_0022BFF0(s32, s32);
s32 func_0099C9C0(s32, s32);                        /* extern */

s32 func_009ABE20(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_s0 = func_0022BFF0(arg0, 0);
    temp_v0 = func_0099C9C0(arg0, 0);
    if (temp_v0 == 2) {
        goto block_32;
    }
    if (temp_s0 != 0) {
        switch (temp_v0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            temp_v1 = arg1 & 0xFF;
            if (M2C_FIELD(temp_s0, u8 *, 5) != temp_v1) {
                if (M2C_FIELD(temp_s0, u8 *, 6) == temp_v1) {
                    return 2;
                }
                goto block_19;
            }
            return 1;
        case 1:                                     /* switch 1 */
            temp_v1_2 = arg1 & 0xFF;
            if (M2C_FIELD(temp_s0, u8 *, 5) != temp_v1_2) {
                if (M2C_FIELD(temp_s0, u8 *, 6) == temp_v1_2) {
                    return 1;
                }
                goto block_19;
            }
            return 2;
        }
    } else {
block_19:
        temp_v0_2 = func_0022C140(arg0);
        if ((temp_v0_2 != 0) && (M2C_FIELD(temp_v0_2, u8 *, 0xB) == 1) && (temp_s3 = (M2C_FIELD(temp_v0_2, u8 *, 9) - 1) & 0xFF, temp_v0_3 = func_0022BFF0(arg0, temp_s3), (temp_v0_3 != 0))) {
            temp_v0_4 = func_0099C9C0(arg0, temp_s3);
            switch (temp_v0_4) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                goto block_32;
            case 0:                                 /* switch 2 */
                if (M2C_FIELD(temp_v0_3, u8 *, 5) == (arg1 & 0xFF)) {
                    return 3;
                }
                goto block_32;
            case 1:                                 /* switch 2 */
                if (M2C_FIELD(temp_v0_3, u8 *, 6) == (arg1 & 0xFF)) {
                    return 3;
                }
                goto block_32;
            }
        } else {
block_32:
            return 0;
        }
    }
}
