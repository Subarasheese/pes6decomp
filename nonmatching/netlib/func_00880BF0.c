/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A60(s32);
s32 func_00814FC0(M2C_UNK *);                       /* extern */
M2C_UNK func_00D0C980();                            /* extern */
extern char D_0088A7B0[];
extern char D_008B2460[];

s32 func_00880BF0(void) {
    s32 var_v0;

    if ((*(s32 *)D_008B2460) != 0) {
        if (func_00814FC0(((void *)D_0088A7B0)) == 0) {
            var_v0 = 0;
        } else {
            (*(s32 *)D_008B2460) = 0;
            goto block_4;
        }
    } else {
block_4:
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        return 0;
    }
    func_00D0C980();
    func_001B7A60(0);
    return 1;
}
