/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008D1E30(void *, s32, M2C_UNK);        /* extern */
s32 func_008D1F20(void *, s32);                     /* extern */
M2C_UNK func_008D2130(void *, M2C_UNK);             /* extern */
M2C_UNK func_008D2780(void *);                      /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */

s32 func_008C9600(u8 *arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v1;
    u32 temp_hi;
    u8 temp_s0;
    void *temp_s0_2;

    if (arg0 == NULL) {
        return 0;
    }
    temp_s0 = *arg0;
    func_008D2780(arg0 + 0x35C);
    temp_v1 = func_008D90A0(arg1) & 0x60;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x40:                                      /* switch 1 */
        func_0026E840(0x84008401);
        return 1;
    case 0x20:                                      /* switch 1 */
        if (arg0 != NULL) {
            temp_s2 = (temp_s0 & 0xFF) + 1;
            temp_s0_2 = arg0 + 4;
            if (func_008D1F20(arg0 + 0x35C, temp_s2 & 0xFF) == 0) {
                var_v1 = 5;
            } else if (temp_s0_2 != NULL) {
                if (M2C_FIELD(temp_s0_2, u8 *, 0x354) == 0) {
                    if (M2C_FIELD((M2C_FIELD(((temp_s2 & 0xFF) + temp_s0_2), u8 *, 1) + temp_s0_2), u8 *, 0x85) == 0) {
                        var_v1 = 5;
                    } else {
                        goto block_21;
                    }
                } else {
                    goto block_21;
                }
            } else {
block_21:
                var_v1 = 2;
            }
        } else {
            var_v1 = 5;
        }
        if (var_v1 == 2) {
            func_0026E840(0x84028400);
            return 2;
        }
        func_0026E840(0x8C008005);
        return 5;
    default:                                        /* switch 1 */
        temp_v0 = func_008D9300(arg1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            var_s0 = (temp_s0 + 1) & 0xFF;
block_37:
            func_0026E840(0x8400F802);
            temp_hi = (u32) (var_s0 & 0xFF) % 10U;
            *arg0 = (u8) temp_hi;
            func_008D1E30(arg0 + 0x35C, ((temp_hi & 0xFF) + 1) & 0xFF, 1);
            func_008D2130(arg0 + 0x35C, 0);
            return 3;
        case 1:                                     /* switch 2 */
            var_s0 = (temp_s0 + 9) & 0xFF;
            goto block_37;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    }
}
