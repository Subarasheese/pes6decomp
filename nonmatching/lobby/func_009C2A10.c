/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(s32, s32);                    /* extern */
extern char D_00A7DD50[];

s32 func_009C2A10(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_00A7DD50) == 0) {
        return 0;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 >= 0) {
        func_001C8590((*(s32 *)D_00A7DD50) + 8, arg1);
        return 1;
    }
    return 0;
}
