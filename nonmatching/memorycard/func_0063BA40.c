/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, s32, s32);           /* extern */

s32 func_0063BA40(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_s0;
    u32 var_v0;
    u8 temp_v0;

    temp_a1 = arg2 & 0xFF;
    var_s0 = 0;
    var_a2 = 1;
    if (temp_a1 < 3) {
        var_a2 = 0;
    }
    if (arg1 != NULL) {
        temp_v1 = arg0 & 0xFFFF;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0x100:                                 /* switch 2 */
            func_0026E840(0x84028400, temp_a1, var_a2);
            var_s0 = 1;
            break;
        case 0x200:                                 /* switch 2 */
            if (arg3 == 0) {
                func_0026E840(0x84008401, temp_a1, var_a2);
                var_s0 = 2;
            }
            break;
        case 0x1:                                   /* switch 2 */
        case 0x10:                                  /* switch 2 */
            if (temp_a1 >= 2) {
                if (var_a2 != 1) {
                    temp_v0 = *arg1;
                    if ((s32) temp_v0 > 0) {
                        *arg1 = temp_v0 - 1;
                        func_0026E840(0x8400F802, temp_a1, var_a2);
                    }
                } else {
                    func_0026E840(0x8400F802, temp_a1, var_a2);
                    *arg1 += arg2;
                    *arg1 -= 1;
                    var_v0 = (u8) *arg1 % (u32) (arg2 & 0xFF);
block_40:
                    *arg1 = (u8) var_v0;
                }
            }
            break;
        case 0x2:                                   /* switch 2 */
        case 0x20:                                  /* switch 2 */
            if (temp_a1 >= 2) {
                if (var_a2 != 1) {
                    if ((s32) *arg1 < (temp_a1 - 1)) {
                        func_0026E840(0x8400F802, temp_a1, var_a2);
                        var_v0 = *arg1 + 1;
                        goto block_40;
                    }
                } else {
                    func_0026E840(0x8400F802, temp_a1, var_a2);
                    *arg1 += 1;
                    var_v0 = (u8) *arg1 % (u32) (arg2 & 0xFF);
                    goto block_40;
                }
            }
            break;
        }
        return var_s0;
    }
    temp_v1_2 = arg0 & 0xFFFF;
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0x100:                                     /* switch 1 */
        func_0026E840(0x84028400, temp_a1, var_a2);
        var_s0 = 1;
        break;
    case 0x200:                                     /* switch 1 */
        if (arg3 == 0) {
            func_0026E840(0x84008401, temp_a1, var_a2);
            var_s0 = 2;
        }
        break;
    }
    return var_s0;
}
