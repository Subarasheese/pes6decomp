/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_0026C270(void);
extern int func_002646D0(int);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_0026B940();                            /* extern */
s32 func_00C865A0();                                /* extern */

s32 func_00CD4410(s32 arg0) {
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
        if (func_00C865A0() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        func_0026B940();
        func_0026C270();
        func_002646E0(arg0);
        /* fallthrough */
    case 2:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
