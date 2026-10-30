/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008D4AD0(void *);                          /* extern */
M2C_UNK func_008D4B00(void *, s32);                 /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */

s32 func_008E2870(void *arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 temp_v1;
    u16 temp_v0;
    u8 temp_s0;
    u8 var_s0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 2);
    if ((s32) temp_v0 > 0) {
        M2C_FIELD(arg0, u16 *, 2) = (u16) (temp_v0 - 1);
        if (M2C_FIELD(arg0, u16 *, 2) == 0) {
            return 2;
        }
    }
    temp_s0 = M2C_FIELD(arg0, u8 *, 0);
    temp_v1 = func_008D90A0(arg1) & 0x60;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x20:                                      /* switch 1 */
        func_0026E840(0x84028400);
        if (func_008D4AD0(arg0 + 4) == 0) {
            return 2;
        }
        if ((temp_s0 & 0xFF) == 1) {
            return 1;
        }
        return 2;
    case 0x40:                                      /* switch 1 */
        if (func_008D4AD0(arg0 + 4) == 0) {
            return 1;
        }
        func_0026E840(0x84008401);
        return 1;
    default:                                        /* switch 1 */
        if (func_008D4AD0(arg0 + 4) != 0) {
            temp_v0_2 = func_008D9300(arg1);
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                if ((temp_s0 & 0xFF) != 1) {
                    var_s0 = 1 & 0xFF;
block_40:
                    func_0026E840(0x8400F802);
                    M2C_FIELD(arg0, u8 *, 0) = var_s0;
                    func_008D4B00(arg0 + 4, var_s0 & 0xFF);
                    return 3;
                }
                return 0;
            case 1:                                 /* switch 2 */
                if (temp_s0 & 0xFF) {
                    var_s0 = 0;
                    goto block_40;
                }
                return 0;
            default:                                /* switch 2 */
                return 0;
            }
        } else {
            return 0;
        }
        break;
    }
}
