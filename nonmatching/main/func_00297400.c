/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027CB30(void);
extern s32 func_0017F900(void);
extern void func_0027CB00(void);
extern int func_0027B5C0(int);
M2C_UNK func_0027C230(s32, M2C_UNK);                /* extern */
M2C_UNK func_00297500(s32);                         /* extern */
extern u8 D_003E9CD4;

s32 func_00297400(M2C_UNK arg0, void *arg1, s32 arg2) {
    u8 var_v0;

    switch (D_003E9CD4) {                           /* irregular */
    case 2:
        func_00297500(M2C_FIELD(arg1, s32 *, 4));
        var_v0 = D_003E9CD4 + 1;
block_13:
        D_003E9CD4 = var_v0;
block_14:
    default:
        return 0;
    case 0:
        func_0027CB30();
        if (arg2 != 0) {
            func_0027CB00();
        }
        func_0027C230(func_0027B5C0(M2C_FIELD(arg1, s32 *, 0)), 0);
        var_v0 = D_003E9CD4 + 1;
        goto block_13;
    case 1:
        if (func_0017F900() != 0) {
            var_v0 = D_003E9CD4 + 1;
            goto block_13;
        }
        goto block_14;
    case 3:
        D_003E9CD4 = 0;
        return 1;
    }
}
