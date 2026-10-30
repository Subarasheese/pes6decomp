/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_0026BFA0(void);
extern void func_002648E0(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_0026C310();                            /* extern */
s32 func_00C86770();                                /* extern */
M2C_UNK func_00C86850();                            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK);                     /* extern */

s32 func_00CD5320(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;

    var_s1 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_00264790((void *) arg0, 0U);
        /* fallthrough */
    case 0:
        func_0026C310();
        func_00C86850();
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        if (func_00C86770() == 1) {
            func_002646E0(arg0);
        case 2:
            func_0026BFA0();
            func_00C8AA10(0);
            func_002646E0(arg0);
        case 3:
            var_s1 = 1;
        }
        break;
    }
    func_002648E0(arg0);
    return var_s1;
}
