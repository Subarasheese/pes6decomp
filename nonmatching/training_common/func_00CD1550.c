/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CD0A60(s32, M2C_UNK);                    /* extern */

void func_00CD1550(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s0 = 1;
        break;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x38) = 0;
        func_002646E0(arg0);
        break;
    default:
        func_00264790((void *) arg0, 0U);
        /* fallthrough */
    case 0:
        var_s2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
            if (func_00CD0A60(arg0, 1) != 0) {
                goto block_11;
            }
        } else {
block_11:
            var_s2 = 1;
        }
        if (var_s2 != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790((void *) arg0, 0x19U);
    }
}
