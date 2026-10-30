/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern s32 func_0017F900(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
s32 func_0017FA00(s32, M2C_UNK *, s32 *, M2C_UNK);  /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
extern M2C_UNK func_00CD3F10;

s32 func_00CD3F20(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp4C;
    s32 temp_v1;
    s32 var_s0;

    sp4C = arg2;
    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            func_00264790((void *) arg0, 0U);
        }
        if (func_0017FA00(arg1, &func_00CD3F10, &sp4C, 4) != 0) {
            func_002646E0(arg0);
            goto block_5;
        }
    } else {
block_5:
        if (func_0017F900() != 0) {
            var_s0 = 1;
        }
    }
    func_002648E0(arg0);
    return var_s0;
}
