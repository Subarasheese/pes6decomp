/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_002262E0(s32);                             /* extern */
extern char D_00591C09[];

s32 func_002306D0(void) {
    s32 var_v0;

    if ((func_00309420() != 0) == 1) {
        goto block_6;
    }
    var_v0 = func_002262E0(func_00226710()) & 0xFF;
    if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
block_6:
        var_v0 = 0xFF;
    }
    return var_v0;
}
