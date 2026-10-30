/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ADF0();                                /* extern */
s32 func_0095AEA0();                                /* extern */
s32 func_0095AEC0();                                /* extern */
s32 func_0095BE50(s32);                             /* extern */
M2C_UNK func_0098CAD0();                            /* extern */
M2C_UNK func_0098CAE0();                            /* extern */

s32 func_009A5D40(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s8 var_v0;

    var_s1 = 0;
    func_0098CAE0();
    temp_v0 = func_0095BE50(M2C_FIELD(arg0, s32 *, 0x374));
    if (temp_v0 != 0) {
        func_0098CAD0();
    }
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 2:
        var_s1 = 3;
        break;
    case 4:
        func_0026E840(0x8C008004);
        M2C_FIELD(arg0, s8 *, 0x378) = 0x11;
        break;
    case 3:
    case 1:
        func_0026E840(0x8C008005);
        if (func_0095AEC0() != 7) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x02010012;
        } else if (func_0095AEA0() != 0) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x01FF000E;
        } else if (func_0095ADF0() == 0) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x02010012;
        } else {
            var_v0 = 0xF;
        }
        M2C_FIELD(arg0, s8 *, 0x378) = var_v0;
        M2C_FIELD(arg0, s32 *, 0x398) = 0xC;
        break;
    }
    return var_s1;
}
