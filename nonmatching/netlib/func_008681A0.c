/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00874470(void *);
extern void func_00874460(void *);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00873EE0(s32 *, s32, M2C_UNK);             /* extern */

s32 func_008681A0(s32 *arg0, s32 arg1) {
    s32 temp_s0;

    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 == 0x3002) {
            func_001C48E8(arg1, 0, 0x10);
            func_00874470(arg0);
            temp_s0 = func_00873EE0(arg0, arg1, 0x10);
            func_00874460(arg0);
            return (temp_s0 == 0) ? 0 : -0x47;
        }
        return -0x46;
    }
    return -0x18;
}
