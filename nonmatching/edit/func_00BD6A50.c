/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD6AF0(s32);                         /* extern */
extern char D_00CBC484[];
extern char D_00CBC488[];

void func_00BD6A50(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if ((*(s32 *)D_00CBC488) > 0) {
        var_s1 = 0;
        do {
            func_00BD6AF0((*(s32 *)D_00CBC484) + var_s1);
            var_s0 += 1;
            var_s1 += 0x2C;
        } while (var_s0 < (*(s32 *)D_00CBC488));
    }
}
