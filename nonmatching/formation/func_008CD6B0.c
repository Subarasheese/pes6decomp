/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_008D1EE0(void *);
M2C_UNK func_008CAA10();                            /* extern */
s32 func_008CB660(void *, u8);                      /* extern */
u8 func_008D1E40(void *);                           /* extern */
M2C_UNK func_008D1F00(void *);                      /* extern */
s32 func_008D1F10(void *);                          /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */

s32 func_008CD6B0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_s1;
    u8 temp_v0_2;

    if (arg0 == NULL) {
        return 0;
    }
    func_008CAA10();
    temp_v1 = func_008D90A0(arg1) & 0x60;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x20:                                      /* switch 1 */
        return func_008CB660(arg0, M2C_FIELD(arg0, u8 *, 4));
    case 0x40:                                      /* switch 1 */
        return 1;
    default:                                        /* switch 1 */
        func_008D1F00(arg0 + 0x480);
        if (func_008D1F10(arg0 + 0x480) == 0) {
            M2C_FIELD(arg0, u8 *, 4) = func_008D1E40(arg0 + 0x480);
            temp_v0 = func_008D9300(arg1);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                temp_s1 = M2C_FIELD(arg0, u8 *, 4);
                if ((s32) temp_s1 < ((func_008D1EE0(arg0 + 0x480) & 0xFF) - 1)) {
                    M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) + 1);
block_32:
                    return 3;
                }
                return 0;
            case 1:                                 /* switch 2 */
                temp_v0_2 = M2C_FIELD(arg0, u8 *, 4);
                if (temp_v0_2 != 0) {
                    M2C_FIELD(arg0, u8 *, 4) = (u8) (temp_v0_2 - 1);
                    goto block_32;
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
