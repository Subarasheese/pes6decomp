/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(M2C_UNK *);                       /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00D172E0(M2C_UNK *, M2C_UNK);              /* extern */
extern char D_00D20008[];
extern char D_00D3958C[];
extern char D_00D395F0[];
extern char D_00D39AA4[];

s32 func_00D190F0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (((*(s32 *)D_00D3958C) == 2) || ((*(s32 *)D_00D3958C) == 3) || ((u32) ((*(s32 *)D_00D3958C) - 5) < 3U)) {
        func_0026E840(0x8C008005);
        return -1;
    }
    if ((u32) (*(u32 *)D_00D39AA4) < 2U) {
        if (func_001C80F0(((void *)D_00D395F0)) == 0) {
            return func_00D172E0(((void *)D_00D20008), 1);
        }
        goto block_8;
    }
    var_s0 = func_00D172E0(((void *)D_00D20008), 0);
block_8:
    return var_s0;
}
