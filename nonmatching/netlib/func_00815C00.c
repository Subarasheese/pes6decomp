/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008045D0();                            /* extern */
s32 func_00804600();                                /* extern */
M2C_UNK func_00805AC0();                            /* extern */
s32 func_00805AF0();                                /* extern */
M2C_UNK func_00807380();                            /* extern */
s32 func_008073B0();                                /* extern */
M2C_UNK func_00816690(void *, M2C_UNK);             /* extern */
s32 func_00D0F5B0();                                /* extern */
s32 func_00D0F5E0();                                /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */

s32 func_00815C00(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v0_3;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x41E);
    } else {
        var_v0 = 0;
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) != 1) {
        if (arg0 != NULL) {
            var_v0_2 = M2C_FIELD(arg0, s8 *, 0x420);
        } else {
            var_v0_2 = 0;
        }
        if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) != 1) {
            if (arg0 != NULL) {
                var_v0_3 = M2C_FIELD(arg0, s8 *, 0x41F);
            } else {
                var_v0_3 = 0;
            }
            if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) == 1) {
                goto block_17;
            }
        } else {
            goto block_17;
        }
    } else {
block_17:
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_00D0F680(0);
            break;
        case 1:                                     /* switch 1 */
            func_008045D0();
            break;
        case 2:                                     /* switch 1 */
            func_00807380();
            break;
        case 3:                                     /* switch 1 */
            func_00805AC0();
            break;
        }
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        if ((func_00D0F5E0() != 1) && (func_00D0F5B0() != 1)) {
            func_00816690(arg0, 4);
        }
        break;
    case 1:                                         /* switch 2 */
        if (func_00804600() == 1) {
            func_00816690(arg0, 4);
        }
        break;
    case 2:                                         /* switch 2 */
        if (func_008073B0() == 1) {
            func_00816690(arg0, 4);
        }
        break;
    case 3:                                         /* switch 2 */
        if (func_00805AF0() == 1) {
            func_00816690(arg0, 4);
        }
        break;
    default:                                        /* switch 2 */
        func_00816690(arg0, 4);
        break;
    }
    return 0;
}
