/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_002EEC80();                            /* extern */

s32 func_002EE490(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_v1;
    u8 var_s0_2;
    u8 var_s0_3;

    temp_v0 = arg0 < 0x124;
    if ((temp_v0 == 0) && (arg0 < 0x156)) {
        var_s0_2 = 0x99;
        if ((temp_v0 == 0) && (arg0 < 0x1BA)) {
            var_s0_2 = M2C_FIELD((arg0 - 0x124 + func_00223A80()), u8 *, 6);
        } else {
            switch (arg0) {                         /* switch 1; irregular */
            case 0x1BA:                             /* switch 1 */
                var_s0_2 = 0x97;
                break;
            case 0x1BB:                             /* switch 1 */
                var_s0_2 = 0x98;
                break;
            }
        }
        if (var_s0_2 == 0x99) {
            goto block_16;
        }
        if (((s32) var_s0_2 >= 0) && ((s32) var_s0_2 < 0x32)) {
            var_a0 = (var_s0_2 * 0x1440) + func_00223A80() + 0xA4;
        } else {
block_16:
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            func_001C48E8(var_a0, 0, 0x1440);
            var_s0 = 1;
        } else {
            var_s0 = 0;
        }
    } else {
        var_s0_3 = 0x99;
        switch (arg0) {                             /* switch 2; irregular */
        default:                                    /* switch 2 */
            var_s0_3 = M2C_FIELD((arg0 - 0x124 + func_00223A80()), u8 *, 6);
            break;
        case 0x1BA:                                 /* switch 2 */
            var_s0_3 = 0x97;
            break;
        case 0x1BB:                                 /* switch 2 */
            var_s0_3 = 0x98;
            break;
        }
        if (var_s0_3 != 0x99) {
            if (((s32) var_s0_3 >= 0x32) && ((s32) var_s0_3 < 0x96)) {
                temp_v0_2 = func_00223A80();
                temp_v1 = var_s0_3 - 0x32;
                var_a1 = temp_v1 >> 1;
                if (temp_v1 < 0) {
                    var_a1 = (s32) (temp_v1 + 1) >> 1;
                }
                temp_a0 = var_s0_3 - 0x32;
                var_v1 = temp_a0 & 1;
                if ((temp_a0 < 0) && (var_v1 != 0)) {
                    var_v1 -= 2;
                }
                var_a0_2 = (var_v1 * 0x880) + (((0x31 - var_a1) * 0x1440) + temp_v0_2) + 0xA4;
            } else {
                goto block_44;
            }
        } else {
block_44:
            var_a0_2 = 0;
        }
        if (var_a0_2 != 0) {
            func_001C48E8(var_a0_2, 0, 0x880);
            var_s0 = 1;
        } else {
            var_s0 = 0;
        }
    }
    func_002EEC80();
    return var_s0;
}
