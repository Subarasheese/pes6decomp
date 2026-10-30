/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_009BEA80(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_009BEC40(void *, s32, M2C_UNK);        /* extern */

s32 func_009BEF60(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;

    var_s1 = 0;
    if (arg0 == NULL) {
        return 4;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x18);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        if (func_0081EB60(0x10) != 0) {
            func_009BEC40(arg0, M2C_FIELD(arg0, s32 *, 0x18), 2);
            if (temp_s0 != M2C_FIELD(arg0, s32 *, 0x18)) {
                func_0026E840(0x8400F802);
            }
        }
        if (func_0081EB60(0x40) != 0) {
            func_009BEA80(arg0, M2C_FIELD(arg0, s32 *, 0x18), 2);
            if (temp_s0 != M2C_FIELD(arg0, s32 *, 0x18)) {
                func_0026E840(0x8400F802);
            }
        }
        if (func_0081EC20(0x4000) != 0) {
            if (arg0 == NULL) {
                var_s1 = 4;
            } else {
                if (arg0 != NULL) {
                    if (M2C_FIELD(arg0, s32 *, 0) != 3) {
                        M2C_FIELD(arg0, s8 *, 0x33) = 1;
                    }
                    M2C_FIELD(arg0, s32 *, 0) = 3;
                }
                func_0026E840(0x84028400);
                var_s1 = 0;
            }
        } else if (func_0081EC20(0x1000) != 0) {
            var_s1 = 3;
            func_0026E840(0x84008401);
        }
        break;
    case 3:                                         /* switch 1 */
        var_s1 = 1;
        switch (temp_s0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            var_s1 = 2;
            break;
        default:                                    /* switch 2 */
            var_s1 = 4;
            break;
        }
        break;
    }
    return var_s1;
}
