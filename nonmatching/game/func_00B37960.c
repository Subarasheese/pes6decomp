/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002727B0(void);
extern char D_00592740[];

s32 func_00B37960(void) {
    s32 var_v0;

    var_v0 = (func_002727B0() & 0xFF) == 0x12;
    if (var_v0 != 0) {
        var_v0 = (*(u8 *)D_00592740) == 2;
    }
    return var_v0;
}
