/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ADF0();                                /* extern */
s32 func_0095AEA0();                                /* extern */
s32 func_0095AEC0();                                /* extern */
s32 func_0095B090(s32);                             /* extern */
M2C_UNK func_0095D210();                            /* extern */
s32 func_0095D4C0();                                /* extern */
M2C_UNK func_0098CAD0();                            /* extern */

s32 func_009A5B20(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s8 var_v0;

    var_s1 = 0;
    temp_v0 = func_0095B090(M2C_FIELD(arg0, s32 *, 0x374));
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
        func_0095D210();
        var_s1 = 1;
        break;
    case 3:
    case 1:
        func_0026E840(0x8C008005);
        if (func_0095AEC0() != 7) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x02010013;
        } else if ((func_0095D4C0() == 0) && (func_0095AEA0() != 0)) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x01FF000E;
        } else if (func_0095ADF0() == 0) {
            var_v0 = 0x20;
            M2C_FIELD(arg0, s32 *, 0x394) = 0x02010013;
        } else {
            var_v0 = 0xF;
        }
        M2C_FIELD(arg0, s8 *, 0x378) = var_v0;
        M2C_FIELD(arg0, s32 *, 0x398) = 0xC;
        break;
    }
    return var_s1;
}
