/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0(void *);                          /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_002648E0(void *);                      /* extern */
M2C_UNK func_002648F0();                            /* extern */
s32 func_00CD0790(void *);                          /* extern */
s32 func_00CD0A60(void *, M2C_UNK);                 /* extern */

void func_00CD1400(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 4:                                         /* switch 1 */
        var_s0 = 1;
        break;
    case 3:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        func_002646E0(arg0);
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
        func_002646E0(arg0);
    case 2:                                         /* switch 1 */
        temp_v0 = func_00CD0790(arg0);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            func_002646E0(arg0);
            break;
        }
        break;
    default:                                        /* switch 1 */
        func_00264790(arg0, 0);
        /* fallthrough */
    case 0:                                         /* switch 1 */
        var_s2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
            if (func_00CD0A60(arg0, 1) != 0) {
                goto block_15;
            }
        } else {
block_15:
            var_s2 = 1;
        }
        if (var_s2 != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790(arg0, 0x34);
    }
}
