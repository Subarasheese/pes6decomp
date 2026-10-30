/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BFB80();                            /* extern */
M2C_UNK func_009BFBE0(M2C_UNK);                     /* extern */
M2C_UNK func_009BFC30(M2C_UNK);                     /* extern */
extern s32 D_003EAD24;

s32 func_009BF4F0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EAD24 != 4) {
        if ((u32) (D_003EAD24 - 6) >= 3U) {
            var_s0 = 7;
        } else {
            goto block_4;
        }
    } else {
block_4:
        func_009BFC30(1);
        func_009BFBE0(1);
        func_009BFB80();
        D_003EAD24 = 5;
    }
    return var_s0;
}
