/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_009C0190[];
extern char D_009C0192[];

s32 func_0096E550(s32 arg0) {
    M2C_UNK *var_a0;
    s32 temp_v1;

    if ((*(u8 *)D_00591C09) == 0xE) {
        temp_v1 = arg0 & 0xFFFF;
        if (temp_v1 == 0) {
            goto block_14;
        }
        if ((*(u16 *)D_009C0192) != 0) {
            var_a0 = ((void *)D_009C0190);
loop_8:
            if (temp_v1 != M2C_FIELD(var_a0, u16 *, 2)) {
                var_a0 += 6;
                if (M2C_FIELD(var_a0, u16 *, 2) == 0) {
                    goto block_14;
                }
                goto loop_8;
            }
            return 0;
        }
        goto block_14;
    }
block_14:
    return 1;
}
