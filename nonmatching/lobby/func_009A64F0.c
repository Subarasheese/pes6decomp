/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095C5A0(s32);                             /* extern */
M2C_UNK func_0098CAD0();                            /* extern */

s32 func_009A64F0(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0095C5A0(M2C_FIELD(arg0, s32 *, 0x374));
    switch (temp_v0) {                              /* irregular */
    case 4:
        M2C_FIELD(arg0, s8 *, 0x378) = 0x19;
        break;
    case 3:
        /* fallthrough */
    case 1:
        func_0098CAD0();
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        M2C_FIELD(arg0, s32 *, 0x398) = 0x18;
        M2C_FIELD(arg0, s8 *, 0x378) = 0x20;
        break;
    case 2:
        func_0098CAD0();
        var_s0 = 1;
        break;
    }
    return var_s0 & 0xFFFF;
}
