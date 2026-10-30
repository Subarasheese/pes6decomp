/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0020B930();                                /* extern */
M2C_UNK func_0020BA40();                            /* extern */
s32 func_00262FC0();                                /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0(s32);                         /* extern */
M2C_UNK func_00266A30(M2C_UNK);                     /* extern */
M2C_UNK func_0026B940();                            /* extern */
M2C_UNK func_0026C270();                            /* extern */
s32 func_00C865A0();                                /* extern */

s32 func_00CD44E0(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    if (func_00262FC0() == 0) {
        func_002648F0(arg0);
        temp_v1 = func_002646D0(arg0) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        default:
            func_00264790(arg0, 0);
            /* fallthrough */
        case 0:
            func_00266A30(0);
            func_00266A30(1);
            func_0020BA40();
            func_002646E0(arg0);
            /* fallthrough */
        case 1:
            if ((func_00C865A0() != 0) && (func_0020B930() != 0)) {
                func_002646E0(arg0);
            }
            break;
        case 2:
            func_0026B940();
            func_0026C270();
            func_002646E0(arg0);
            /* fallthrough */
        case 3:
            var_s0 = 1;
            break;
        }
        func_002648E0(arg0);
        return var_s0;
    }
    return func_00C865A0();
}
