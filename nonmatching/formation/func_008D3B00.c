/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008B9A90(s32, M2C_UNK);                /* extern */
M2C_UNK func_008D32D0(void *, s32);                 /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */

s32 func_008D3B00(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_a1;
    u8 temp_v0_2;
    u8 temp_v1_2;

    if (arg0 == NULL) {
        return 0;
    }
    temp_v1 = func_008D90A0(arg1) & 0x1060;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x1000:                                    /* switch 1 */
        return 6;
    case 0x20:                                      /* switch 1 */
        if (M2C_FIELD((M2C_FIELD(arg0, u8 *, 1) + arg0), u8 *, 3) == 0) {
            if (M2C_FIELD(arg0, u8 *, 2) != 0) {
                func_0026E840(0x8C008005);
                return 5;
            }
            goto block_17;
        }
block_17:
        func_0026E840(0x84028400);
        func_008B9A90(M2C_FIELD(arg0, s32 *, 0xB4), 0);
        return 2;
    case 0x40:                                      /* switch 1 */
        func_0026E840(0x84008401);
        return 1;
    default:                                        /* switch 1 */
        temp_v0 = func_008D9300(arg1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            temp_a1 = M2C_FIELD(arg0, u8 *, 2);
            if (temp_a1 != 0) {
                if ((temp_a1 == 2) && (M2C_FIELD(arg0, u8 *, 1) == 1)) {
                    return 0;
                }
                func_008D32D0(arg0, ((s32) (M2C_FIELD(arg0, u8 *, 1) + 1) % (s32) temp_a1) & 0xFF);
                goto block_40;
            }
block_40:
            func_0026E840(0x8400F802);
            return 3;
        case 1:                                     /* switch 2 */
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 2);
            if (temp_v1_2 != 0) {
                temp_v0_2 = M2C_FIELD(arg0, u8 *, 1);
                if (temp_v0_2 != 0) {
                    func_008D32D0(arg0, ((temp_v0_2 & 0xFF) - 1) & 0xFF);
                    goto block_40;
                }
                if (temp_v1_2 != 2) {
                    func_008D32D0(arg0, (temp_v1_2 - 1) & 0xFF);
                    goto block_40;
                }
                return 0;
            }
            goto block_40;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    }
}
