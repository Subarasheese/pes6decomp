/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00C88AC0(s32);                         /* extern */
extern char D_00CCCE20[];

void func_00C88C30(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CCCE20);
    do {
        func_00C88AC0(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4U);
    func_001C48E8(((void *)D_00CCCE20), 0, 0x10);
}
