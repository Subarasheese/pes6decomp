/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ED880(u8);                              /* extern */
s32 func_009EF0E0(u8);                              /* extern */
s32 func_009F0020(u8);                              /* extern */
s32 func_009F39B0(u8);                              /* extern */
extern char D_005926FF[];

s32 func_00BE9B70(void) {
    s32 var_s0;

    var_s0 = 0;
    switch ((*(u8 *)D_005926FF)) {                           /* irregular */
    case 2:
        if (func_009F0020((*(u8 *)D_005926FF)) != 0) {
block_12:
            var_s0 = 1;
        }
        break;
    case 1:
        if (func_009F39B0((*(u8 *)D_005926FF)) != 0) {
            goto block_12;
        }
        break;
    case 3:
        if (func_009EF0E0((*(u8 *)D_005926FF)) != 0) {
            goto block_12;
        }
        break;
    case 4:
        if (func_009ED880((*(u8 *)D_005926FF)) != 0) {
            goto block_12;
        }
        break;
    }
    return var_s0;
}
