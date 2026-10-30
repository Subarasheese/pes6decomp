/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C3330();                            /* extern */
extern char D_00A7DD58[];

s32 func_009C3CD0(s32 arg0, s32 arg1) {
    if ((*(s32 *)D_00A7DD58) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 3) {
        M2C_FIELD(((arg0 * 4) + (*(s32 *)D_00A7DD58)), s32 *, 0x58) = arg1;
        func_009C3330();
        return 1;
    }
    return 0;
}
