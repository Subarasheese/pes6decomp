/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001DA4B0(s32);                         /* extern */
M2C_UNK func_002CADF0();                            /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
s32 func_00309420();                                /* extern */
extern char D_003D41E0[];
extern s32 D_003E99E4;

void func_0020C240(void) {
    s32 *var_s0;
    u32 var_s1;

    if (D_003E99E4 == 2) {
        var_s1 = 0;
        var_s0 = ((void *)D_003D41E0);
        do {
            func_001DA4B0(*var_s0);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2U);
        if (func_00309420() != 0) {
            func_002CADF0();
            func_002CBA60(0xB);
        }
        D_003E99E4 = 0;
    }
}
