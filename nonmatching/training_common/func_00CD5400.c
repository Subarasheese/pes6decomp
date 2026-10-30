/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001DA550(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_001DA820(M2C_UNK);                     /* extern */
M2C_UNK func_001DD910(M2C_UNK);                     /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
s32 func_00CD5510(s32);                             /* extern */
extern char D_00CF9608[];
extern char D_00CF960C[];

s32 func_00CD5400(s32 arg0) {
    f32 sp38;
    f32 sp3C;
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        var_s0 = 1;
        break;
    default:
        func_00264790(arg0, 0);
        /* fallthrough */
    case 0:
        if (func_00CD5510(arg0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        sp38 = (*(f32 *)D_00CF9608);
        sp3C = (*(f32 *)D_00CF960C);
        func_001DD910(0x21);
        func_001DA820(1);
        func_001DA550(2, &sp38);
        func_002646E0(arg0);
        break;
    case 2:
        if (func_0017F900() != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
