/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009063A0();                            /* extern */
M2C_UNK func_00906B50();                            /* extern */
M2C_UNK func_009075E0();                            /* extern */
M2C_UNK func_00907C60();                            /* extern */
extern char D_00591C09[];

void func_00907F00(void) {
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    default:
        func_00907C60();
        return;
    case 2:
    case 1:
        func_009075E0();
        return;
    case 4:
        func_00906B50();
        return;
    case 14:
        func_009063A0();
        return;
    }
}
