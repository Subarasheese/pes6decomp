/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F80C0(s32, s32);
M2C_UNK func_00220240(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00B40590[];

void func_00AF7280(void) {
    s32 var_s0;

    func_00220240(((void *)D_00B40590), 9);
    var_s0 = 0xCC;
    do {
        func_002F80C0(var_s0, 0);
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0xDD);
}
