/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_008D1EE0(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008CAA10();                            /* extern */
M2C_UNK func_008CAD70(void *, s64, M2C_UNK, M2C_UNK); /* extern */
s32 func_008CB0C0(void *);                          /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008E6FA0(s32);                             /* extern */

s32 func_008CD4F0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    u8 temp_v1_3;
    u8 var_s0;

    if (arg0 == NULL) {
        return 0;
    }
    func_008CAA10();
    temp_s1 = func_008CB0C0(arg0);
    temp_s0 = func_008D1EE0(arg0 + 0x480) & 0xFF;
    temp_v1 = func_008D90A0(arg1) & 0x180;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x100:                                     /* switch 1 */
        temp_a0 = temp_s0 & 0xFF;
        temp_v1_2 = temp_a0 - 1;
        if ((temp_s1 >= temp_v1_2) && (temp_a0 >= 0xC)) {
            return 0;
        }
        if (temp_s1 >= temp_v1_2) {
            var_s0 = M2C_FIELD(arg0, u8 *, 0x47C);
        } else {
            var_s0 = temp_s1 + 1;
        }
block_25:
        if (M2C_FIELD(arg0, u8 *, 0x24) == 0) {
            temp_v0 = func_008E6FA0(arg2);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                func_0026E840(0x84028400);
                return 9;
            case 1:                                 /* switch 2 */
                func_0026E840(0x8400F803);
                var_s1 = 8;
                goto block_39;
            default:                                /* switch 2 */
                func_0026E840(0x8C008005);
                return 5;
            }
        } else {
            func_0026E840(0x8400F803);
            var_s1 = 3;
block_39:
            func_008CAD70(arg0, (s64) ((s64) var_s0 << 0x30) >> 0x30, 1, 0);
            return var_s1;
        }
        break;
    case 0x80:                                      /* switch 1 */
        temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x47C);
        if (((s32) temp_v1_3 >= temp_s1) && ((temp_s0 & 0xFF) >= 0xC)) {
            return 0;
        }
        if ((s32) temp_v1_3 >= temp_s1) {
            var_s0 = (temp_s0 & 0xFF) - 1;
        } else {
            var_s0 = temp_s1 - 1;
        }
        goto block_25;
    default:                                        /* switch 1 */
        return 0;
    }
}
