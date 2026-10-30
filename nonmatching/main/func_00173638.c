/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00172FC8(int, int, int, int);
extern s32 func_00173578(void *);
s32 func_00173638(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0;
    if (arg0 != NULL) {
        if (arg1 != 0xCB) {
            if (arg1 < 0xCC) {
                if (arg1 != 0xC9) {
                    return 0;
                }
                var_v0_2 = func_00173578(arg0);
                goto block_10;
            }
            if (arg1 != 0xCD) {
                return 0;
            }
            goto block_9;
        }
block_9:
        var_v0_2 = func_00172FC8((s32) arg0, arg1, arg2, arg3);
block_10:
        var_v0 = var_v0_2;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
