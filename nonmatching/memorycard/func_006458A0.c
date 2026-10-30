/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001F0160(s32);                             /* extern */
extern char D_00659990[];
extern char D_0065D980[];

void func_006458A0(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = ((void *)D_00659990);
    var_s0 = ((void *)D_0065D980);
    do {
        var_s2 += 1;
        *var_s0 = func_001F0160(*var_s1);
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 0x12);
}
