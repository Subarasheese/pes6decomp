/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001B9DF0(void);
extern char D_00510FD0[];
extern char D_008DC270[];

s32 func_0024DF20(void) {
    s32 *var_a0;
    s32 var_a1;

    if ((*(s32 *)D_00510FD0) == 4) {
        goto block_10;
    }
    if (func_001B9DF0() == 0) {
        var_a1 = 0;
        var_a0 = ((void *)D_008DC270);
loop_4:
        if (*var_a0 != 4) {
            var_a1 += 1;
            var_a0 += 4;
            if (var_a1 >= 8) {
                goto block_10;
            }
            goto loop_4;
        }
        return 1;
    }
block_10:
    return 0;
}
