/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD890[];
extern char D_00CBD894[];

void func_00C010E0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 >= 0x2E) {
        var_a0 = 0;
    }
    if (var_a0 >= 0x20) {
        (*(s32 *)D_00CBD894) &= ~(1 << (var_a0 - 0x20));
        return;
    }
    (*(s32 *)D_00CBD890) &= ~(1 << var_a0);
}
