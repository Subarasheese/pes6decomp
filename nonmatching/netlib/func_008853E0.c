/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00885060();                            /* extern */
M2C_UNK func_00885430();                            /* extern */
extern char D_008B2552[];

s32 func_008853E0(void) {
    switch ((*(u8 *)D_008B2552)) {                           /* irregular */
    case 0:
        func_00885430();
        break;
    case 1:
        func_00885060();
        break;
    }
    return 0;
}
