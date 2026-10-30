/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BF5950(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7990(s32);                         /* extern */

void func_00B9BAA0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 5:                                         /* switch 1 */
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
        switch (temp_v1) {                          /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
            var_v1 = 0x10;
            M2C_FIELD(arg0, s32 *, 8) = 4;
            break;
        case 1:                                     /* switch 3 */
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                var_v1 = 0x81;
                M2C_FIELD(arg0, s32 *, 8) = 4;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
            } else {
                var_v1 = 0x10;
                M2C_FIELD(arg0, s32 *, 8) = 4;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
            }
            break;
        default:                                    /* switch 3 */
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                M2C_FIELD(arg0, s32 *, 8) = 3;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
                if (M2C_FIELD(arg0, s32 *, 0x10) != 4) {
                    var_v1 = 0xA1;
                } else {
                    var_v1 = 0x91;
                }
            } else {
                var_v1 = 0x10;
                M2C_FIELD(arg0, s32 *, 8) = 2;
                M2C_FIELD(arg0, s32 *, 0x20) = 1;
            }
            break;
        }
block_48:
        M2C_FIELD(arg0, s32 *, 0x28) = var_v1;
    case 3:                                         /* switch 1 */
        return;
    case 4:                                         /* switch 1 */
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x10);
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                var_v1_2 = 0x61;
                M2C_FIELD(arg0, s32 *, 8) = 3;
            } else {
                var_v1_2 = 0x10;
                M2C_FIELD(arg0, s32 *, 8) = 2;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = var_v1_2;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            return;
        case 1:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                var_v1_3 = 0x71;
                M2C_FIELD(arg0, s32 *, 8) = 3;
            } else {
                var_v1_3 = 0x10;
                M2C_FIELD(arg0, s32 *, 8) = 2;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = var_v1_3;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 1;
        var_v1 = 0x10;
        goto block_48;
    default:                                        /* switch 1 */
        func_00BF7990(temp_a0);
        func_00BF5950(0);
        func_00BF5950(1);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        var_v1 = 0xF0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        goto block_48;
    }
}
