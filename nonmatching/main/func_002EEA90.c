/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
s32 func_002EEA90(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    u8 temp_a0;
    u8 var_a1;
    u8 var_v1;
    u8 var_v1_2;
    void *temp_v0;

    temp_v0 = func_00223A80();
    var_a1 = M2C_FIELD(temp_v0, u8 *, 4);
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 5);
    temp_v1 = 0x64 - (temp_a0 + (var_a1 * 2));
    if (arg0 == 0) {
        var_v0 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0 = (s32) (temp_v1 + 1) >> 1;
        }
        if (var_v0 > 0) {

        } else {
            goto block_7;
        }
    } else if (temp_v1 > 0) {
        var_a1 = temp_a0 + 0x32;
    } else {
block_7:
        var_a1 = 0x99;
    }
    if (var_a1 == 0x99) {
        goto block_58;
    }
    temp_v0_2 = func_00223A80();
    if (arg0 != 0) {
        if (M2C_FIELD(temp_v0_2, u8 *, 4) != 0x32) {
            if (M2C_FIELD(temp_v0_2, u8 *, 5) != 0) {
                var_s1 = 0;
loop_44:
                temp_s0 = var_s1 + 0x156;
                var_v1 = 0x99;
                switch (temp_s0) {                  /* switch 2; irregular */
                default:                            /* switch 2 */
                    var_v1 = M2C_FIELD((func_00223A80() + temp_s0), u8 *, -0x11E);
                    break;
                case 0x1BA:                         /* switch 2 */
                    var_v1 = 0x97;
                    break;
                case 0x1BB:                         /* switch 2 */
                    var_v1 = 0x98;
                    break;
                }
                if (var_v1 != 0x99) {
                    var_s1 += 1;
                    if (var_s1 >= 0x64) {
                        goto block_58;
                    }
                    goto loop_44;
                }
                return temp_s0;
            }
            return 0x156;
        }
        goto block_58;
    }
    if ((s32) M2C_FIELD(temp_v0_2, u8 *, 5) < 0x63) {
        if (M2C_FIELD(temp_v0_2, u8 *, 4) != 0) {
            var_s0 = 0;
loop_21:
            temp_s1 = var_s0 + 0x124;
            var_v1_2 = 0x99;
            switch (temp_s1) {                      /* switch 1; irregular */
            default:                                /* switch 1 */
                var_v1_2 = M2C_FIELD((func_00223A80() + temp_s1), u8 *, -0x11E);
                break;
            case 0x1BA:                             /* switch 1 */
                var_v1_2 = 0x97;
                break;
            case 0x1BB:                             /* switch 1 */
                var_v1_2 = 0x98;
                break;
            }
            if (var_v1_2 != 0x99) {
                var_s0 += 1;
                if (var_s0 >= 0x32) {
                    goto block_58;
                }
                goto loop_21;
            }
            return temp_s1;
        }
        return 0x124;
    }
block_58:
    return 0x1CA;
}
