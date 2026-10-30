/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
M2C_UNK func_0019E4A8();                            /* extern */
s32 func_0019EC50(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_002B9E70[];

void func_00105E58(s32 arg0) {
    M2C_UNK *var_a0;
    s32 var_v0;

    if (arg0 == 0) {
        func_0019E4A8();
        var_a0 = ((void *)D_002B9E70);
loop_2:
        if (func_0019EC50(var_a0, 0x770, 0) >= 0) {
            if (M2C_FIELD(((void *)D_002B9E70), s32 *, 0x24) == 0) {
                var_v0 = 0xFFFF;
                do {
                    var_v0 -= 4;
                } while (var_v0 != -1);
                var_a0 = ((void *)D_002B9E70) - 0x6190;
                goto loop_2;
            }
            func_0019B3A0(0);
        } else {
loop_6:
            goto loop_6;
        }
    }
}
