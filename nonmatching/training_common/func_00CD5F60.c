/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern s32 func_003424C0(void);
extern int func_002646D0(int);
extern void func_00255EA0(void);
extern s32 func_0017F900(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */

s32 func_00CD5F60(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_00264790((void *) arg0, 0U);
        /* fallthrough */
    case 0:
        if (func_0017F900() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        func_003424C0();
        func_002646E0(arg0);
        /* fallthrough */
    case 2:
        func_00255EA0();
        func_002646E0(arg0);
        /* fallthrough */
    case 3:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
