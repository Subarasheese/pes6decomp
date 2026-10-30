/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_00915020();                            /* extern */
M2C_UNK func_00915520(s32);                         /* extern */
extern char D_0058D7AA[];
extern void *D_00923FCC;

s32 func_00914EF0(void) {
    s32 var_s0;

    if ((*(s8 *)D_0058D7AA) == 0) {
        var_s0 = 0xD;
    } else {
        var_s0 = 0xA;
    }
    if (func_0090F820() != 0) {

    } else if (M2C_FIELD(D_00923FCC, s32 *, 0) < (M2C_FIELD(D_00923FCC, s32 *, 8) - var_s0)) {
        func_0026E840(0x8400F802);
        M2C_FIELD(D_00923FCC, s32 *, 0) = (s32) (M2C_FIELD(D_00923FCC, s32 *, 0) + 1);
        func_00915520((M2C_FIELD(D_00923FCC, s32 *, 0) + var_s0) - 1);
        func_00915020();
    }
    return 0;
}
