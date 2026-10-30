/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015EF80(int);
M2C_UNK func_001600B8();                            /* extern */
extern char D_0038326C[];

s32 func_00160F10(void) {
    s32 var_s0;

    var_s0 = 1;
    switch ((*(s32 *)D_0038326C)) {                           /* irregular */
    case 1:
        break;
    default:
        var_s0 = 0;
        break;
    case 2:
        /* fallthrough */
    case 0:
        func_001600B8();
        break;
    }
    func_0015EF80(-1);
    return var_s0;
}
