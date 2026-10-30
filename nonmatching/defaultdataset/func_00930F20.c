/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E7100(s32);
extern s32 func_0021E000(u32);
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00931010();                            /* extern */
extern s32 D_003EAC68;
extern char D_009CA7A8[];

s32 func_00930F20(void) {
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EAC68) {                           /* irregular */
    case 1:
        if (func_001E7100(func_0021E000(7U)) != NULL) {
            D_003EAC68 = 2;
        }
        break;
    default:
        if (func_001E7100(func_0021E000(7U)) == NULL) {
            func_001E75A0(func_0021E000(7U), ((void *)D_009CA7A8));
        }
        D_003EAC68 = 1;
        break;
    case 2:
        func_00931010();
        D_003EAC68 = 3;
        /* fallthrough */
    case 3:
        func_001E7140(func_0021E000(7U));
        /* fallthrough */
    case 4:
        D_003EAC68 = 0;
        var_s0 = 1;
        break;
    }
    return var_s0;
}
