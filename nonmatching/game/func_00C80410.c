/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00CCC1C0[];

void func_00C80410(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if ((*(u8 *)D_00591C09) == 5) {
        var_a0 = 0;
    }
    (*(u8 *)D_00CCC1C0) = ((*(u8 *)D_00CCC1C0) & ~1) | (var_a0 & 1);
    (*(u8 *)D_00CCC1C0) = ((*(u8 *)D_00CCC1C0) & ~2) | 2;
}
