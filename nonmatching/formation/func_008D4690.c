/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_008B2900(M2C_UNK);                         /* extern */
s32 func_008B9430();                                /* extern */
s32 func_008C13D0(s32, M2C_UNK, s32);               /* extern */
s32 func_008C1490(M2C_UNK);                         /* extern */

void func_008D4690(void *arg0) {
    M2C_UNK var_s3;
    s32 temp_v0;
    s32 var_s0;
    s8 temp_v1;
    s8 temp_v1_2;

    var_s0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        temp_v0 = func_008C1490(0x36);
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
        temp_v1 = M2C_FIELD(arg0, s8 *, 1);
        switch (temp_v1) {                          /* switch 1; irregular */
        case 9:                                     /* switch 1 */
            func_001D7D80(temp_v0, 3);
            break;
        case 3:                                     /* switch 1 */
            if (func_008B9430() == 0) {
                func_001D7D80(temp_v0, 4);
            } else {
            case 2:                                 /* switch 1 */
                func_001D7D80(temp_v0, 2);
            }
            break;
        case 1:                                     /* switch 1 */
        case 5:                                     /* switch 1 */
            func_001D7D80(temp_v0, 1);
            break;
        }
        temp_v1_2 = M2C_FIELD(arg0, s8 *, 0);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            var_s3 = 0x89;
            func_008C13D0(temp_v0, 0x8B, func_001F08B0(0x6C0078));
            break;
        case 4:                                     /* switch 2 */
            var_s0 = 1;
            /* fallthrough */
        default:                                    /* switch 2 */
            var_s3 = 0x8C;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = func_008C13D0(temp_v0, var_s3, 0);
        if (var_s0 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = func_008C13D0(temp_v0, 0x8A, func_008B2900(0));
            M2C_FIELD(arg0, s32 *, 0x34) = func_008C13D0(temp_v0, 0x8B, func_008B2900(1));
        }
    }
}
