/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B9F880(u32);
u32 func_0022C790(M2C_UNK, s32);                    /* extern */
extern char D_00510FD0[];

void func_00BC43E0(void) {
    u32 var_v0;

    var_v0 = 0x4E8D;
    switch ((*(s32 *)D_00510FD0)) {                           /* irregular */
    case 6:
        break;
    case 4:
        var_v0 = 0x7405;
        break;
    case 7:
        var_v0 = func_0022C790(7, (*(s32 *)D_00510FD0));
        break;
    }
    func_00B9F880(var_v0);
}
